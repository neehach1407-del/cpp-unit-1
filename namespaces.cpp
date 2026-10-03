#include <iostream>
using namespace std;

namespace FirstSpace {
    int var = 1;

    void display() {
        cout << "Inside FirstSpace, var = " << var << endl;
    }
}

namespace SecondSpace {
    int var = 2;

    void display() {
        cout << "Inside SecondSpace, var = " << var << endl;
    }
}

int main() {
    FirstSpace::display();
    SecondSpace::display();

    return 0;
}
