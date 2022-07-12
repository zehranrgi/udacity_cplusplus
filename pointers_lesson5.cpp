//Note-1:
/*Assigning the address of a variable to a pointer using unary operator (&)
which returns the address of that variable.
Accessing the value stored in the address using unary operator (*)
which returns the value of the variable located at the address specified by its operand.
*/
/* this is an integer variable with value = 54 */ 

int a = 54; 

// this is a pointer that holds the address of the variable 'a'.
// if 'a' was a float, rather than int, so should be its pointer.
int * pointerToA = &a;  

// If we were to print pointerToA, we'd obtain the address of 'a':
std::cout << "pointerToA stores " << pointerToA << '\n';

// If we want to know what is stored in this address, we can dereference pointerToA:
std::cout << "pointerToA points to " << * pointerToA << '\n';


//Note-2 
//C++ provides two-pointer operators, which are Address of Operator (&) and Indirection Operator (*).

#include<iostream>
#include<string>

int main ()
{
  int * pointerI;
  int number;
  
  pointerI = &number;
  *pointerI = 45;
  
  std::cout << "number = "<<number<<"\n";
  
  return 0;
}
//number = 45 

