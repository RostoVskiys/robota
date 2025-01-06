#pragma once

#include <iostream>

class MyString {
private:
    char* str;
    size_t length;
    static size_t objectCount;  // Статическое поле для подсчёта объектов

    size_t my_strlen(const char* input);
    void strle(char* dest, const char* src);

public:
    MyString();                      // Конструктор по умолчанию
    MyString(const MyString& other);  // Конструктор копирования
    ~MyString();                     // Деструктор
    void display() const;
    static size_t getObjectCount();   // Статический метод для получения количества объектов
};
