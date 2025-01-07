#pragma once
#include <iostream>

class Array {
private:
    int* data;        // Вказівник на динамічний масив
    size_t size;      // Розмір масиву

    void copyFrom(const Array& other); // Допоміжний метод для копіювання даних

public:
    Array();                    // Конструктор за замовчуванням
    Array(size_t size);         // Конструктор з розміром
    Array(const Array& other);  // Конструктор копіювання
    ~Array();                   // Деструктор

    void fill(int value);                // Заповнити масив одним значенням
    void display() const;                // Відобразити вміст масиву
    void resize(size_t newSize);         // Змінити розмір масиву
    void sort();                         // Сортувати масив
    int getMin() const;                  // Знайти мінімальне значення
    int getMax() const;                  // Знайти максимальне значення

    size_t getSize() const;              // Отримати поточний розмір масиву
};
