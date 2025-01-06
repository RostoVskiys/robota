#include "string.h"
#include <iostream>
using namespace std;

size_t MyString::objectCount = 0;

size_t MyString::my_strlen(const char* input) {
    size_t len = 0;
    while (input[len] != '\0') {
        len++;
    }
    return len;
}

void MyString::strle(char* dest, const char* src) {
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}

MyString::MyString() {
    length = 5;
    str = new char[length + 1];
    strle(str, "hello");
    objectCount++; 

MyString::MyString(const MyString& other) {
    length = other.length;
    str = new char[length + 1];
    strle(str, other.str);
    objectCount++;  
}

MyString::~MyString() {
    delete[] str;
    objectCount--; 
}

void MyString::display() const {
    cout << str << endl;
}

size_t MyString::getObjectCount() {
    return objectCount;
}
