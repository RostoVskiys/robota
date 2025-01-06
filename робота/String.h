#pragma once

#include <iostream>

class MyString {
private:
    char* str;
    size_t length;
    static size_t objectCount;

    size_t my_strlen(const char* input);
    void strle(char* dest, const char* src);

public:
    MyString();
    MyString(const MyString& other);
    ~MyString();
    void display() const;
    static size_t getObjectCount()
};
