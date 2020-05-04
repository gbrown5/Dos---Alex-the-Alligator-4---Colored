#ifndef DOSDIR_H
#define DOSDIR_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>

#define MAX_LENGTH 8

struct DirList
{
    char* dirList[255];
    int total;
} DirList;

int getDir(const char *path, char* outList[]);
void free_list(int ele, char* lst[]);

#endif
