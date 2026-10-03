#include <iostream>
using namespace std;

int var = 100;   // Global variable

class Sample {
public:
    void show();
};

void Sample::show() {
    cout << "Inside Sample::show() function." << endl;
}

int main() {
    int var = 10;   // Local variable

    cout << "Local var = " << var << endl;
    cout << "Global var = " << ::var << endl;

    Sample obj;
    obj.show();

    return 0;
}
