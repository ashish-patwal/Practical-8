//C++ program to demonstrate pure virtual functions and abstract classes in c++

#include<iostream> 
using namespace std; 
  
class Base //Abstrate class defined 
{ 
   int x; 

public: 
    virtual void fun() = 0;  //Virtual function defined
    int getX() { return x; } 

}; 
  
// This class inherits from Base and implements fun() 
class Derived: public Base 
{ 
    int y; 
public: 
    void fun() { cout << "fun() called"; } //Implementation of virtual function fun()
}; 
  
int main() 
{ 
    Derived d; 
    d.fun(); 
 return 0; 
} 
