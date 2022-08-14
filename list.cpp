#include "list.h"

list::list() {
    index = nullptr;
    size = 0;
}

list::~list() {
    if(index)
    {
        delete []index;
        index = nullptr;
    }
    size = 0;
}

list::list(const list &source) {
    if(source.index != nullptr)
    {
        index = new word[size];
        *index = *(source.index);
    }

    *this = source;
}

list &list::operator=(const list &source) {
    //don't self assign
    if(this == &source)
    {
        return *this;
    }
    else
    {
        delete []index;
        index = new word[size];
        *index = *(source.index);
        size = source.size;
    }

    return *this;
}