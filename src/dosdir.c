#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>
#include "dosdir.h"

#define MAX_LENGTH 8
#define MAX

int getDir(const char *path, char* outList[])
{
    int dirCount = 0;
    struct dirent *dp;
    DIR *dfd = opendir(path);

    char testPath[255];
    testPath[0] = '\0';

    if(dfd != NULL)
    {
        while((dp = readdir(dfd)))
        {
            //Skip ., .. directories
            if(strcmp(dp->d_name, ".") != 0 && strcmp(dp->d_name, "..") != 0)
            {
                //Combine strings: path/curItem
                strcat(testPath, path);
                strcat(testPath, "/");
                strcat(testPath, dp->d_name);

                //Test if the current item can be opened
                if(opendir(testPath) != NULL)
                {
                    outList[dirCount] = strdup(dp->d_name);
                    dirCount++;
                }

                //clear path to test
                testPath[0] = '\0';
            }

        }
        closedir(dfd);
    }
    else
    {
        printf("No Folders found");
    }

    return dirCount;
}

void free_list(int ele, char* lst[])
{
    int i;
    for(i = 0; i < ele; i++)
    {
        free(lst[i]);
    }
}

/*
int main(int argc, char *argv[])
{
    struct DirList dlCustomMap;
    dlCustomMap.total = getDir("C:\\", dlCustomMap.dirList);

    int i;
    for(i = 0; i < dlCustomMap.total; i++)
    {
        if(dlCustomMap.dirList[i] != NULL)
        printf("%s\n", dlCustomMap.dirList[i]);
    }

    printf("Total Dirs: %d\n", dlCustomMap.total);

    free_list(dlCustomMap.total, dlCustomMap.dirList);
    return 0;
}*/
