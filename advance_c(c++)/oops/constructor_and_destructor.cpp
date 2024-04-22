#include <iostream>
using namespace std;

class bike{ 
    public:
    bike(){ // special function (constructor)
        cout<<"Bike is start"<<endl;
        cout<<"I am a constructor"<<endl;
    }
    
    string bike_(){ // normal function
        return "bike is off";
    }
    
    ~bike(){ // special function (destructor)
        cout<<"Bike is end"<<endl;
        cout<<"I am a destructor"<<endl;
    }
};

int main() {
   bike  keyOn;
//    bike keyOff;
  cout<<keyOff.bike_()<<endl;
}