#include <iostream>
using namespace std; 

class Shape{
  protected:
  int height;
  int weight;
  int length;
  int base;
  int radius;
};

class tri:public Shape{
    private:
    int base;
    int height;
    
    public:
    void setValue(int b, int h){
        base = b;
        height = h;
        // cout<<base<<endl<<height;
    }
    
    
    public:
    void tri_area(){
        cout<<0.5*base*height;
    }
    
  
};

int main() {
    tri t;
    t.setValue(10, 20);
    t.tri_area();
    
    return 0;
}


// single inheritance
#include <iostream>
using namespace std; 

class A{
  public:
  void a(){
      cout<<"I am from class A"<<endl;
  }
};

class B:public A{
  public:
  void b(){
      cout<<"I am from class B"<<endl;
  }
};


int main() {
    B b1;
    b1.a();
    b1.b();
    
    return 0;
}

// multi level inh.
#include <iostream>
using namespace std; 

class A{
  public:
  void a(){
      cout<<"I am from class A"<<endl;
  }
};

class B:public A{
  public:
  void b(){
      cout<<"I am from class B"<<endl;
  }
};

class C:public B{
  public:
  void c(){
      cout<<"I am from class C"<<endl;
  }
};



int main() {
    C obj;
    obj.a();
    obj.b();
    obj.c();
    
    return 0;
}

// multiple inh.
#include <iostream>
using namespace std; 

class A{
  public:
  void a(){
      cout<<"I am from class A"<<endl;
  }
};

class B{
  public:
  void b(){
      cout<<"I am from class B"<<endl;
  }
};

class C:public A, public B{
  public:
  void c(){
      cout<<"I am from class C"<<endl;
  }
};



int main() {
    C obj;
    obj.a();
    obj.b();
    obj.c();
    
    return 0;
}


// hierarchical inh.

#include <iostream>
using namespace std; 

class Shape{
  public:
  void shape(){
      cout<<"I am from class shape"<<endl;
  }
};

class Shape2d:public Shape{
  public:
  void shape2d(){
      cout<<"I am from class shape2d"<<endl;
  }
};

class Circle:public Shape2d{
    public:
      void circle(){
          cout<<"I am from class circle"<<endl;
      }
};

class Shape3d:public Shape{
  public:
  void shape3d(){
      cout<<"I am from class shape3d"<<endl;
  }
};




int main() {
    Circle obj;
    obj.shape();
    obj.shape2d();
    obj.circle();
    
    return 0;
}