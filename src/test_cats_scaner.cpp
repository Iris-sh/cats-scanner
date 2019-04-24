/*
    File:    test_lynx_scaner.cpp
    Created: 12 March 2019 at 09:13 Moscow time
    Author:  Гаврилов Владимир Сергеевич
    E-mails: vladimir.s.gavrilov@gmail.com
             gavrilov.vladimir.s@mail.ru
             gavvs1977@yandex.ru
*/

#include <cstdio>
#include "../include/test_cats_scaner.h"
#include "../include/cats_lexeme.h"

void test_cats_scaner(const std::shared_ptr<cats_scanner::Scanner>& catssc)
{
    cats_scanner::cats_token lti;
    cats_scanner::Lexem_code llc;
    do{
        lti    = catssc->current_lexeme();
        llc   = lti.lexeme_.code_;
        auto s = catssc->token_to_string(lti);
        puts(s.c_str());
    }while(llc != cats_scanner::Lexem_code::Nothing);
}
