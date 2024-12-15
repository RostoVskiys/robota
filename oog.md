#include <iostream>
using namespace std;

class Rectangle {
private:
    int x;
    int y;
    int height;
    int width;

public:

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    int getHeight() {
        return height;
    }

    int getWidth() {
        return width;
    }

    void setX(int n) {
        x = n;
    }

    void setY(int n) {
        y = n;
    }

    void setHeight(int n) {
        height = n > 0 ? n : 0; 
    }

    void setWidth(int n) {
        width = n > 0 ? n : 0; 
    }

    void show() {
        cout << "X: " << getX()
            << " Y: " << getY()
            << " Height: " << getHeight()
            << " Width: " << getWidth() << endl;
    }
};

int main() {
    Rectangle p1;

    p1.setX(5);
    p1.setY(10);
    p1.setHeight(15);
    p1.setWidth(20);

    p1.show();

    return 0;
}
