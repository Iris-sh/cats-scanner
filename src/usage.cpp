/*
    File:    usage.cpp
    Created: 11 March 2019 at 19:31 Moscow time
    Author:  Гаврилов Владимир Сергеевич
    E-mails: vladimir.s.gavrilov@gmail.com
             gavrilov.vladimir.s@mail.ru
             gavvs1977@yandex.ru
*/

#include <cstdio>
#include "../include/usage.h"

static const char* usage_str =
    R"~(cats-scanner
Copyright (c) Gavrilov V.S., 2019
cats-scanner is a program for a testing of lexical analysis of the educational
programming language cats.

This program is free sofwtware, and it is licensed under the GPLv3 license.
There is NO warranty, not even MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

Usage: %s test_file
)~";

void usage(const char* program_name)
{
    printf(usage_str, program_name);
}
