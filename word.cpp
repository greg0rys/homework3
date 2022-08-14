
#include "word.h"
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

//default constructor
word::word() {
    data = nullptr; // right sized array so this must start as nullptr.
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
    *this = source; // this works because we have the overloaded assignment operator.
}

//overloaded assignment operator
 word & word::operator=(const word &source) {

    // dont self assign
    if(this == &source)
    {
        return *this;
    }
        delete [] data;
        data = new char[strlen(source.data) + 1];
        strcpy(data, source.data);
        count = source.count;
    return *this;
}

void word::SetData(const char * datum) {
    if(this->data) {
        delete [] data;
    }
    this->data = new char[strlen(datum) + 1];
    strcpy(this->data, datum);

}