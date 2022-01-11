#include <windows.h>
#include <stdio.h>

int main()
{
    char szLogicalDriveStrings[BUFSIZ] = "";
    GetLogicalDriveStrings(BUFSIZ - 1, szLogicalDriveStrings);
    char *pDrive = szLogicalDriveStrings;
    UINT uDriveType;
    while (strlen(pDrive) != 0)
    {
        uDriveType = GetDriveType(pDrive);
        //DRIVE_UNKNOWN
        if (uDriveType == DRIVE_REMOVABLE)
        {
            printf("%s\n", pDrive);
        }
        pDrive += strlen(pDrive) + 1;
    }
}