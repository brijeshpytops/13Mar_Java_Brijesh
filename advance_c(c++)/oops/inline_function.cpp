#include <iostream>
using namespace std;

// Declaration of inline function
inline int square(int x) {
    return x * x;
}

int main() {
    int num = 10;
    int result = square(num); 
    cout << "Square of " << num << " is: " << result << endl;

    return 0;
}