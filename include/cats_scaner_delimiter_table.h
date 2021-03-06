/*
    File:    lynx_scaner_delimiter_table.h
    Created: 25 March 2019 at 17:31 Moscow time
    Author:  Гаврилов Владимир Сергеевич
    E-mails: vladimir.s.gavrilov@gmail.com
             gavrilov.vladimir.s@mail.ru
             gavvs1977@yandex.ru
*/

#ifndef CATS_SCANER_DELIMITER_TABLE_H
#define CATS_SCANER_DELIMITER_TABLE_H
#   include "../include/elem.h"
#   include "../include/cats_lexeme.h"
namespace cats_scanner{
    extern const trans_table::Elem<Lexem_code> delimiters_jump_table[];
};
#endif
