//Note-1:
/*
In the course so far we have been required to defined a variable's type before we could use it.
We have also had to define the types for input variables of functions and classes. */

/*Goal: look at a program, and see if we can make it more versatile*/

#include<iostream>

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.

//Example

#include <iostream>
using namespace std;

void hello() {
  cout <<"Hello"<< endl;
}
void hello(string name) {
  cout <<"Hello "<<name<< endl;
}  //Here, we can use same function, but also we can put another parameter to the same function.

int main() {
  hello();
  hello("I am Zehra");
  
  return 0;
}

//Note-2
/*We can overload operators in C++. This is useful when using user defined objects.

In the example below we will use operators to overload the '+' sign.

Let's look at the example in detail.
You can see in the code below, the function must specify a return type. 
 Then it must use the keyword 'operator' followed by the '+' sign. */

#include <iostream>
 
using namespace std;

class Shape 
{
    private:
      int length;     // Length of a box
      int width;
      
    public:
      // Constructor definition
      Shape(int l = 2, int w = 2) 
      {
         length = l;
         width = w;
      }
		
      double Area() 
      {
         return length * width;
      }
      
      int operator + (Shape shapeIn)
      {
          return Area() + shapeIn.Area();
      }
};

int main(void) 
{
   Shape sh1(4, 4);    // Declare shape1
   Shape sh2(2, 6);    // Declare shape2
   
   int total = sh1 + sh2;
   cout << "\nsh1.Area() = " << sh1.Area();
   cout << "\nsh2.Area() = " << sh2.Area();
   cout << "\nTotal = "<<total;   //28
   return 0;
}  


//Moreover for overloading: https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
