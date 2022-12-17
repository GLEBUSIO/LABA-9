#ifndef MARAFON REZULTS_H
#define MARAFON REZULTS_H

#include "constants.h"
struct start
{
    int start_hour;
    int start_minute;
    int start_seconde;
};
struct finish
{
    int finish_hour;
    int finish_minute;
    int finish_seconde;
};
struct person
{
    int number;
    char first_name[MAX_STRING_SIZE];
    char middle_name[MAX_STRING_SIZE];
    char last_name[MAX_STRING_SIZE];
    char club[MAX_STRING_SIZE];
};
#endif