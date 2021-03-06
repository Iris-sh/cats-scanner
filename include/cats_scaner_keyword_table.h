/*
    File:    lynx_scaner_keyword_table.h
    Created: 09 February 2019 at 15:13 Moscow time
    Author:  Гаврилов Владимир Сергеевич
    E-mails: vladimir.s.gavrilov@gmail.com
             gavrilov.vladimir.s@mail.ru
             gavvs1977@yandex.ru
*/

#ifndef CATS_SCANER_KEYWORD_TABLE_H
#define CATS_SCANER_KEYWORD_TABLE_H
#   include "../include/elem.h"
#   include "../include/cats_lexeme.h"
namespace cats_scanner{
    extern const trans_table::Elem<Lexem_code> keywords_jump_table[];
};
#endif
