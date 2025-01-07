#pragma once
#include <iostream>

class Array {
private:
    int* data;        // �������� �� ��������� �����
    size_t size;      // ����� ������

    void copyFrom(const Array& other); // ��������� ����� ��� ��������� �����

public:
    Array();                    // ����������� �� �������������
    Array(size_t size);         // ����������� � �������
    Array(const Array& other);  // ����������� ���������
    ~Array();                   // ����������

    void fill(int value);                // ��������� ����� ����� ���������
    void display() const;                // ³��������� ���� ������
    void resize(size_t newSize);         // ������ ����� ������
    void sort();                         // ��������� �����
    int getMin() const;                  // ������ �������� ��������
    int getMax() const;                  // ������ ����������� ��������

    size_t getSize() const;              // �������� �������� ����� ������
};
