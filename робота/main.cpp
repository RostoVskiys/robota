#include "string.h"
#include <iostream>
using namespace std;

int main() {
    MyString str1;
    str1.display();
    cout << "Object count: " << MyString::getObjectCount() << endl;

    MyString str2 = str1;  // Конструктор копирования
    str2.display();
    cout << "Object count: " << MyString::getObjectCount() << endl;

    return 0;
}
