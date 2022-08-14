#pragma once
#include "word.h"
#include <iostream>
#include <cstring>
#include <cctype>

#define MAX_CHARS 30
using namespace std;

//default constructor
word::word() {
    data = new char[MAX_CHARS];
    strcpy(data, "No Word Yet");
    count = 0;
}

//destructor
word::~word() {
    if(data)
    {
        delete []data;
        data = nullptr;
    }
    count = 0;
}

//copy constructor
word::word(const word &source) {
    if(source.data != nullptr)
    {
        data = new char[strlen(source.data) + 1];
        strcpy(data,source.data);

    }
    count = source.count;
}

//overloaded assignment operator
 word & word::operator=(const word &source) {

    // dont self assign
    if(this == &source)
    {
        return *this;
    }
    else
    {
        delete []data;
        data = new char[strlen(source.data) + 1];
        strcpy(data, source.data);
        count = source.count;
    }
    return *this;
}