#include <iostream>
using namespace std;

class O {
private:
    int t;
    double p;

public:
    O(int t = 0, double p = 0.0) : t(t), p(p) {}

    bool operator==(const O& o) const {
        return t == o.t;
    }

    O& operator=(const O& o) {
        if (this != &o) {
            t = o.t;
            p = o.p;
        }
        return *this;
    }

    bool operator>(const O& o) const {
        if (t == o.t) {
            return p > o.p;
        }
        return false;
    }

    void d() const {
        cout << "Type: " << t << ", Price: " << p << endl;
    }
};

int main() {
    O c1(1, 1500.0);
    O c2(1, 2000.0);
    O c3(2, 1800.0);

    if (c1 == c2) {
        cout << "c1 and c2 have the same type." << endl;
    }
    else {
        cout << "c1 and c2 have different types." << endl;
    }

    c3 = c1;
    cout << "After assignment, c3: ";
    c3.d();

    if (c1 > c2) {
        cout << "c1 is more expensive than c2." << endl;
    }
    else {
        cout << "c1 is cheaper or has the same price as c2." << endl;
    }

    return 0;
}
