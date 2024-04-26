#include <iostream>
using namespace std;

class animal{
    public:
    virtual  void makeSound(){
        cout<<"Animal makes a sound"<<endl;
    }
};

class dog : public animal{
    public:
    void makeSound(){
        cout<<"dog bark"<<endl;
    }
};
class cat : public animal{
    public:
    void makeSound(){
        cout<<"cat meow"<<endl;
    }
};

int main() {
    animal* a;
    dog d;
    cat c;
    
    a = &d;
    a->makeSound();
    a = &c;
    a->makeSound();
//   

    return 0;
}