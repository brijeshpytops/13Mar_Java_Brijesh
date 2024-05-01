#include <iostream>
using namespace std;

void foo() {
    static int count = 0;
    count++;
    cout << "Count: " << count <<endl;
}

int main() {
    foo(); 
    foo();
    foo();
    return 0;
}