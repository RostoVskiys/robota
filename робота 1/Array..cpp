#include "Array.h"
#include <algorithm>  // std::sort
#include <limits>     // std::numeric_limits
using namespace std;

Array::Array() : data(nullptr), size(0) {}

Array::Array(size_t size) : size(size) {
    data = new int[size];      // �������� ���'�� ��� ������
    fill(0);                   // ���������� ����� ������
}

Array::Array(const Array& other) {
    copyFrom(other);           // ��������� �����
}

Array::~Array() {
    delete[] data;             // ��������� ���'��
}

void Array::copyFrom(const Array& other) {
    size = other.size;
    data = new int[size];
    for (size_t i = 0; i < size; ++i) {
        data[i] = other.data[i];
    }
}

void Array::fill(int value) {
    for (size_t i = 0; i < size; ++i) {
        data[i] = value;
    }
}

void Array::display() const {
    for (size_t i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void Array::resize(size_t newSize) {
    int* newData = new int[newSize];  // �������� ���� ���'���
    size_t copySize = (newSize < size) ? newSize : size;

    for (size_t i = 0; i < copySize; ++i) {
        newData[i] = data[i];  // ������� ������� ��������
    }

    for (size_t i = copySize; i < newSize; ++i) {
        newData[i] = 0;        // ��� �������� ���������� ������
    }

    delete[] data;  // ��������� ����� ���'���
    data = newData;
    size = newSize;
}

void Array::sort() {
    std::sort(data, data + size);  // ������������� std::sort
}

int Array::getMin() const {
    if (size == 0) {
        throw runtime_error("Array is empty");
    }
    return *min_element(data, data + size);
}

int Array::getMax() const {
    if (size == 0) {
        throw runtime_error("Array is empty");
    }
    return *max_element(data, data + size);
}

size_t Array::getSize() const {
    return size;
}
