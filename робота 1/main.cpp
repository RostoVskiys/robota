#include "Array.h"
#include <iostream>
using namespace std;

int main() {
    Array arr(5);       // Створюємо масив розміром 5
    arr.fill(3);        // Заповнюємо всі елементи значенням 3
    cout << "Array: ";
    arr.display();

    arr.resize(8);      // Змінюємо розмір масиву до 8
    cout << "Resized Array: ";
    arr.display();

    arr.fill(10);       // Заповнюємо всі елементи значенням 10
    arr.display();

    cout << "Min: " << arr.getMin() << endl;  // Мінімум
    cout << "Max: " << arr.getMax() << endl;  // Максимум

    Array arrCopy = arr;  // Виклик конструктора копіювання
    cout << "Copied Array: ";
    arrCopy.display();

    // Сортування масиву
    arrCopy.fill(5);
    arrCopy.resize(5);
    arrCopy.display();
    arrCopy.sort();
    cout << "Sorted Array: ";
    arrCopy.display();

    return 0;
}
