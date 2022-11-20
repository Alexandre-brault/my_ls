/*
** EPITECH PROJECT, 2022
** structure my ls
** File description:
** C
*/

#include <stdarg.h>
#include "my.h"

#ifndef STRUCT_LS_H
    #define STRUCT_LS_H


struct table_flag {
    char name;
    int (*flags)(struct dirent *entry);
};

struct table_flag variable [] = {
        {0, 0}
};
#endif