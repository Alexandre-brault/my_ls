/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** C
*/


#include <stdarg.h>
#include <stdio.h>
#include "my.h"
#include "struct_ls.h"
#include <dirent.h>
#include <stdlib.h>


int main(char *path)
{
    DIR *dir;
    struct dirent *entry;
    dir =  opendir('.');
    if (dir) {
        while (entry == readdir(dir) != NULL) {
            my_putstr(entry->d_name);
            my_putchar(' ');
        }
        my_putchar('\n');
    }
    closedir(dir);
    return (0);
}