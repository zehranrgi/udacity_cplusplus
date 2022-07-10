//Note-1:
//The most basic function is one that accepts no parameters and does not return a value.

//The syntax for the declaration of this type of function is:

void functionName();
//The syntax for the definition is:

void functionName()
{
     statement(s);
}
//An example of the function declaration and definition:

//The declaration:

void printMessage();
//The definition:

void printMessage()
{
     std::cout<<"Call your mother!";
}

//To call the function:

int main()
{
     ...
     printMessage();
     ...
    return 0;
}

//Complete example for that: 

#include<iostream>

void printMessage(); //note, this is placed BEFORE main()

int main()
{
    printMessage();
    return 0;
}

//note, the definition is conventionally placed after main
void printMessage() 
{
    std::cout<<"HEY! I'm from a function!";
}



//Example-2:

/*Write a function called printProduct that prints the results of the multiplication 
**of two integers. 
*/

int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;
    
    printProduct(m1, m2, product);
    return 0;
}

//Now, look at that:

#include<iostream>

void printProduct(int m1, int m2, int product);

int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;

    printProduct(m1, m2, product);
    return 0;
}

void printProduct(int m1, int m2, int product)
{
    std::cout<<m1<<" * "<<m2<<" = "<<product;
}

//For the writing cleaner code, there can be two file main.cpp; main.hpp. 

//main.cpp will include: 
 #include "main.hpp"

 int main()
 {
    int m1 = 4;
     int m2 = 5;
     int product;

     product = m1 * m2;

     //call the function
     printProduct(m1, m2, product);
     return 0;
 }

//main.hpp will include:

#include <iostream>

 /*The function declaration can be omitted in the header file. 
 **As long as the function is defined before it is used, 
 **the declaration is optional.
**It is often considered good practice to list the declarations
**at the top of the header file. 
*/
 void printProduct(int m1, int m2, int product);

 void printProduct(int m1, int m2, int product)
 {
     std::cout << m1 <<"*"<< m2 <<" = "<<product << " \n";
 }


//Exanple-3 : 

#include<iostream>

int increment(int input);
int main()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    a = increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";
    return 0;
}
int increment(int input)
{
    input++;
    std::cout<<"In the function call a = "<<input<<"\n";
    return input;
}

/*Output: 
Before the function call a = 34
In the function call a = 35
After the function call a = 35
*/


//Note-4: 


