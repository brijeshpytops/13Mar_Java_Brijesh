#include <iostream>
using namespace std;

class person{ 
    private:
    // data member
    int pin;
    
    public:
    // member function
    void setPin(int p){
        pin = p;
    }
    
    void getPin(){
        cout<<"Your pin is : "<< pin;
    }
};

int main() {
  person p1;
//   p1.pin = 2343;
//   cout<< p1.pin;
    int pin_ = 2343;
    p1.setPin(pin_);
    p1.getPin();
}