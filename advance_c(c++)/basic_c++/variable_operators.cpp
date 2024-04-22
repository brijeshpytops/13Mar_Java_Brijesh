#include <iostream>
using namespace std;

int main(){
    int x = 10, y = 20;
    int z;
    z = x + y;
    cout<<z;
}


#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cout<<"Enter x and y: ";
    cin>>x>>y;
    z = x + y;
    cout<<z;
}


#include <iostream>
using namespace std;

int main(){
    string name = "brijesh gondaliya";
    cout<<name;
}


#include <iostream>
using namespace std;

int main(){
   int start = 1, end = 10;
   for (start; start<=end; start++){
       cout<<start<<endl;
   }
}


#include <iostream>
using namespace std;

int main(){
   int table = 5, start = 1, end = 10;
   for (start; start<=end; start++){
       cout<< table << "*" << start << "=" << table*start <<endl;
   }
}