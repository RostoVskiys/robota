#include "Array.h"
#include <iostream>
using namespace std;

int main() {
    Array arr(5);       // ��������� ����� ������� 5
    arr.fill(3);        // ���������� �� �������� ��������� 3
    cout << "Array: ";
    arr.display();

    arr.resize(8);      // ������� ����� ������ �� 8
    cout << "Resized Array: ";
    arr.display();

    arr.fill(10);       // ���������� �� �������� ��������� 10
    arr.display();

    cout << "Min: " << arr.getMin() << endl;  // ̳����
    cout << "Max: " << arr.getMax() << endl;  // ��������

    Array arrCopy = arr;  // ������ ������������ ���������
    cout << "Copied Array: ";
    arrCopy.display();

    // ���������� ������
    arrCopy.fill(5);
    arrCopy.resize(5);
    arrCopy.display();
    arrCopy.sort();
    cout << "Sorted Array: ";
    arrCopy.display();

    return 0;
}
