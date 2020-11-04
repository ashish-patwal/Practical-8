// C++ program for function overloading 
#include <iostream> 
  
using namespace std; 

class overload 
{ 
    public: 
      
    // function type 1
    void func(int x) 
    { 
        cout << "value of x is " << x << endl; 
    } 
      
    // function type 2
    void func(double x) 
    { 
        cout << "value of x is " << x << endl; 
    } 
      
    // function type 3 
    void func(int x, int y) 
    { 
        cout << "value of x and y is " << x << ", " << y << endl; 
    } 
}; 
  
int main() { 
      
    overload obj1; 
      
    // Which function is called will depend on the parameters passed 
    // The first 'func' is called  
    obj1.func(4); 
      
    // The second 'func' is called 
    obj1.func(6.92); 
      
    // The third 'func' is called 
    obj1.func(50,81); 
    return 0; 
}  