//Note-1:
/* Wouldn't it be nice to just write a function once and use it over and over for different variable types?

Well, actually, we can do that.

C++ allows us to create generic functions using templates.
*/

/* 
The syntax for templates for functions:

The function declaration:

template <typename T>  //tell the compiler we are using a template

//T represents the variable type. Since we want it to be for any type, we 
//use T
T  functionName (T parameter1,T parameter2, ...); 


The function definition:

template <typename T>
T functionName (T  parameter1,T  parameter2,...)
{
    function statements;
} 
*/

//very good explanation: https://www.youtube.com/watch?v=ttOM3HulFyU


//Note-2:
/* when the types are different.

We will still use the same form, we will just need to tell 
the compiler that different variable types are allowed.*/


#include<iostream>
using namespace std;

template <typename T, typename U>
T getBigger(T input1, U input2);


int main()
{
    int a = 5;
    float b = 6.334;
    int bigger;
    cout<<"Between "<<a<<" and "<<b<<" "<<getBigger(a,b)<<" is bigger.\n";

    cout<<"Between "<<a<<" and "<<b<<" "<<getBigger(b,a)<<" is bigger.\n";    
    return 0;
}

template <typename T, typename U>
T getBigger(T input1, U input2)
{
    if(input1 > input2)
        return input1;
    return input2;
}


//I will continue on that subject
