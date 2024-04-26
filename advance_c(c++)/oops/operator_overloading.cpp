#include <iostream>
using namespace std;

class complex{
    private:
    double real;
    double imag;
    
    public:
    complex(double r, double i) : real(r), imag(i) {}
    
    complex operator+(const complex& other) const {
        return complex(real + other.real, imag + other.imag);
    }
    
    void display(){
        cout<<"Real : "<<real<<endl<<"Imag : "<<imag;
    }
    
};

int main() {
    complex c1(2.0, 3.0);
    complex c2(1.0, 4.0);
    complex c3(3.0, 3.0);

    complex result = c1 + c2 + c3; // Calls operator+ overload
    result.display();
    return 0;
   
   

    return 0;
}