//Note-1

/*Using Namespace
**using namespace std tells us that we use std library. so we dont have to write std:: . 
**However, using namespace can lead to problems.*/
  
Quiz1:

/*Use the namespace keyword to simplify typing*/

#include <iostream>

int main()
{
    std::cout << "Hey, writing std:: is pain, ";
    std::cout << "change the program so I don't have to write it.";
    return 0;
}


Solution:

#include <iostream>
using namespace std;

int main()
{
    cout << "Hey, writing std:: is pain, ";
    cout << "change the program so I don't have to write it.";
    return 0;
}  

//Note-2: 

/*
**we used “cout” to write to the console.
**Any string literal must be enclosed in double quotes.
**Numbers do not require double quotes.
*/

int integer = 4543;
std::cout<<”The value of integer is “<<integer;

// Output: The value of integer is 4543

//Note-3: 
/* endl and "\n" will perform the same function


//Note-4 
/*the keyword 'const' to define a constant.*/

//Note-5
/*It cannot be changed during the program.
**If you want to change the value of weightGoal,
**you will have to edit the source code and recompile it.*/

#include <iostream>
using namespace std;

int main()
{
    const int weightGoal = 100;
    cout<<"WeightGoal = "<<weightGoal<<"\n";
    weightGoal = 200;
    cout<<"WeightGoal = "<<weightGoal<<"\n";
    return 0;
}


//Note-6
/*enumarated

enum type_name {
  value1,
  value2,
  value3,
  .
  .
} object_names;


*/
#include <iostream>

using namespace std;

int main()
{
    //define MONTHS as having 12 possible values
    enum MONTHS {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    
    //define bestMonth as a variable type MONTHS
    MONTHS bestMonth;
    
    //assign bestMonth one of the values of MONTHS
    bestMonth = Jan;
    
    //now we can check the value of bestMonths just 
    //like any other variable
    if(bestMonth == Jan)
    {
        cout<<"I'm not so sure January is the best month\n";
    }
    return 0;
}
//Note-7

#include <iostream>
#include <iomanip>

 int main()
 {
     int a = 45;
     float b = 45.323;
     double c = 45.5468;
     int aa = a + 9;
     float bb = b + 9;
     double cc = c + 9;
     int aaa = aa + 9;
     float bbb = bb + 9;
     double ccc = cc + 9;

     std::cout<<"print with set width = 10\n";
     std::cout<<"Ints"<<std::setw(10);
     std::cout<<"Floats"<<std::setw(10);
     std::cout<<"Doubles"<<std::setw(10) << "\n";

     std::cout<< a;
     std::cout<< std::setw(12)<< b;
     std::cout<< std::setw(10)<< c << "\n";    

     std::cout<< aa;
     std::cout<< std::setw(12)<< bb;
     std::cout<< std::setw(10)<< cc << "\n";  

     std::cout<< aaa;
     std::cout<< std::setw(12)<< bbb;
     std::cout<< std::setw(10)<< ccc << "\n\n"; 

     std::cout<<"print with tabs\n";
     std::cout<<"Int"<<"\tFloats"<<"\tDoubles\n";
     std::cout<< aaa<<"\t"<< bbb<<"\t"<< ccc <<"\n"; 

     return 0;
 }
// The output for the program:

print with set width = 10
Ints    Floats   Doubles
45      45.323   45.5468
54      54.323   54.5468
63      63.323   63.5468

print with tabs
Ints    Floats    Doubles
63       63.323    63.5468

  
//note-8: 
/* File IO : 
** - Include the <fstream> library 
**      - ofstream myfile; (for writing to a file)
**      - ifstream myfile; (for reading a file)
**      - fstream myfile; (for reading and writing a file)
*/


//Note-9
/* Put the what to do in the main program (.cpp file)
** => #include "main.hpp" ;
**Put the how to do a task in the header file (.hpp file)
** => write libraries to "main.hpp".*/
  
//Note-10
/* In C++ we use std::cout for writing to the console.
**And we have std::cin for reading from the console.*/
  
//Note-11
/*The std::cin will not retrieve strings that have a space in them.
**It will see the space as the end of the input.*/
//Example
  

#include<iostream>
#include<string>

int main()
{
    std::string name1, address1, phoneNo1;

    //get user1 information
    std::cout<<"User1 what is your name?\n";
    std::getline(std::cin, name1);
    std::cout<<"User1 what is your address?\n";
    std::getline(std::cin, address1);
    std::cout<<"User1 what is your phone number?\n";
    std::getline(std::cin, phoneNo1);


    //print information
    std::cout<<"\n\n"<<name1<<"\n";
    std::cout<<"\t\t"<<address1<<"\n";
    std::cout<<"\t\t"<<phoneNo1<<"\n";
 
    return 0;
}

//Note-12

 /*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

 #include <iostream>
 #include <string>
 #include <sstream>

 int main ()
 {
   std::string stringLength, stringWidth;
   float length = 0;
   float width = 0;
   float area = 0;

   std::cout << "Enter the length of the room: ";
   //get the length as a string
   std::getline (std::cin,stringLength);
   //convert to a float
   std::stringstream(stringLength) >> length;
   //get the width as a string
   std::cout << "Enter width: ";
   std::getline (std::cin,stringWidth);
   //convert to a float
   std::stringstream(stringWidth) >> width;
   area = length * width;
   std::cout << "\nThe area of the room is: " << area << std::endl;
   return 0;
 }
  
  
  
  
  
  

