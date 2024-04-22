#include <iostream>
using namespace std;

class person{ // class declaration
    // data member 
    public: // access specifier
    string name;
    int age;
    
    // member fucntions
    // private: // access specifier
    string speak(){
        return "i can speak"; 
    }
};

int main() {
    person b; // object declaration
    
    b.name = "brijesh gondaliya";
    b.age = 28;

    cout<<b.name<<endl;
    cout<<b.age<<endl;
    cout<<b.speak()<<endl;
    
    person j; // object declaration
    j.name = "jatin patel";
    j.age = 25;

    cout<<j.name<<endl;
    cout<<j.age<<endl;
    cout<<j.speak();

    return 0;
}