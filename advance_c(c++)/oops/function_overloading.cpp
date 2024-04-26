#include <iostream>
using namespace std;

class Value{
    public:
    void display(int a){
        cout<< "int :"<<a<<endl;
    }
    void display(double  a){
        cout<< "double  :"<<a<<endl;
    }
    
};

int main() {
   Value v1;
  v1.display(10);
   v1.display(10.2);

    return 0;
}