#include <windows.h>
#include <stdio.h>
#define bufsize 512
int main()
{
    char disks[bufsize] = "";
    GetLogicalDriveStrings(bufsize - 1, disks);
    char *disk = disks;
    while (strlen(disk) != 0)
    {
        if (GetDriveType(disk) == DRIVE_REMOVABLE)
        {
            printf("%s\n", disk);
        }
        disk += strlen(disk) + 1;
    }
}
