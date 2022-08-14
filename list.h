#pragma once
#include "word.h"

class list {
public:
    list();
    ~list();
    list(const list &);
    list & operator=(const list &);

private:
    word * index;
    int size;
};