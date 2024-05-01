#include <iostream>
using namespace std;

void divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Division by zero");
    }
    cout << "Result: " << a / b << endl;
}

int main() {
    try{
        divide(10, 2);
        divide(10, 0);
        
    }catch (runtime_error& err){
        cerr << "Exception caught: " << err.what() << endl;
    }
    return 0;
}