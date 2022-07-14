
/* C++ has several control flow options.

if-else statements
for loops
while loops
switch statements  */ 


//Note-1 
//Relational Operators
#include<iostream>
#include<string>

int main()
{
    //instead of printing 0 and 1, create an array where 
    //0 = False, 1 = True
    std::string TorF[] = {"False", "True"};
    
    int a = 100;
    int b = 33;
    int c = 33;
    
    //Print out the string values of each relational operation
    std::cout<<"a < b is "<<TorF[a<b];  //Output: a<b is False

//Logical Operators
// The && operator = AND  ; The || operator = OR ; ! = The 'Not' operator


//Note-2 
//if statements

//For example:
    if(guess < TARGET)
    {
        std::cout<<"Your guess is too low.\n";
    }
    else if(guess > TARGET)
    {
        std::cout<<"Your guess is too high.\n";
    }
    else
    {
        std::cout<<"Yay! You guessed correctly.\n";
    }
        
    return 0;
    
//Note-3
//switch statement

//For example: 
#include <iostream>

int main()
{
    float in1, in2;
    char operation;
    float answer;

    std::cout<<"Enter two numbers:\n";
    std::cin>>in1;
    std::cin>>in2;
    std::cout<<"Enter the operation '+','-':\n";
    std::cin>>operation;

    switch(operation)
    {
        case('+'):  {
                    answer=in1 + in2;
                    break;
                    }
         case('-'):  {
                    answer=in1 - in2;
                    break;
                    }  
        default:
                    std::cout<<"Illegal operation";
    }

    std::cout<<in1<<operation<<in2<<" = "<<answer<<"\n";

    return 0;
}

//Note-4:
//for loops
/* 
for ( declaration : range ) statement;

for (initialization; condition; increase) statement; */ 

/* size_t: https://www.youtube.com/watch?v=w3brYyLx8S0 */ 

//for example: 
#include <iostream>

int main()
{
    for(int i=0; i< 10;i++)    //!! It is important to where you put ++ or --. In front of i or after i.
    {
        std::cout<<"i = "<<i<<"\n";   
    }
    return 0;
}

//Note-5:
//while loops & do..while loops

//for example: 
#include <iostream>


int main()
{
    int count = 0;
    
    //This do..while loop will execute until count =5
    do
    {
        std::cout<<"Count = "<<count<<"\n";
        count++;
    }while(count < 5);


    int otherCount = 6; 
    //This do..while loop will execute once. Even though
    //otherCount > 5
    do
    {
        std::cout<<"othercount = "<<otherCount<<"\n";
        otherCount++;
    }while(otherCount < 5);
    
    return 0;
}

//Ouput: 
/* 
Count = 0
Count = 1
Count = 2
Count = 3
Count = 4
othercount = 6 */ 

//example:
/*Goal: In the programming quiz, use a while loop to prompt
**the user to guess a target number. 
**Tell the user if the guess is too high or too low. 
**The user enters -1  or guesses the target number to end 
**the program.
*/
#include <iostream>
#include<sstream>

int main()
{
    int target = 55;
    std::string userString;
    int guess = -1;

    while(guess != target )
    {
        std::cout<<"Guess a number between 0 and 100: ";
        std::cin>>guess;
        std::cout<<guess<<"\n";
        if(guess > target)
            std::cout<<"Your guess is too high\n";
        else if(guess < target)
            std::cout<<"Your guess is too low\n";
        else
            std::cout<<"You guessed the target!\n";

        //Note I had to use double quotes around "q"
        //because it is a string
        if(guess == -1)
        {
            std::cout<<"good bye!";
            break;
        }
    }
    return 0;
}

//Note-6
//infinite loop
while(1)
{
     std::cout<<"This while loop will run forever\n";
}

