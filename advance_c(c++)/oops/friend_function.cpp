#include <iostream>
using namespace std;

class friend_class{
    private:
    int x;
    
    public:
    friend_class(int val) : x(val) {};
    
    friend void display(const friend_class& obj);
};

void display(const friend_class& obj){
    cout << "Value of x: " << obj.x <<endl;
};

int main() {
    friend_class obj(10);
    
    display(obj);

    return 0;
}