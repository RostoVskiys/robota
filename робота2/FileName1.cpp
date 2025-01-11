#include <iostream>
using namespace std;

class F {
private:
    double a;
    double p;

public:
    F(double a = 0.0, double p = 0.0) : a(a), p(p) {}

    bool operator==(const F& f) const {
        return a == f.a;
    }

    F& operator=(const F& f) {
        if (this != &f) {
            a = f.a;
            p = f.p;
        }
        return *this;
    }

    bool operator>(const F& f) const {
        return p > f.p;
    }

    void d() const {
        cout << "Area: " << a << " m^2, Price: " << p << " USD" << endl;
    }
};

int main() {
    F f1(60, 100000);
    F f2(60, 120000);
    F f3(80, 150000);

    if (f1 == f2) {
        cout << "f1 and f2 have the same area." << endl;
    }
    else {
        cout << "f1 and f2 have different areas." << endl;
    }

    f3 = f1;
    cout << "After assignment, f3: ";
    f3.d();

    if (f1 > f2) {
        cout << "f1 is more expensive than f2." << endl;
    }
    else {
        cout << "f1 is cheaper or has the same price as f2." << endl;
    }

    return 0;
}
