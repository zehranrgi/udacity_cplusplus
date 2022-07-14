//Note-1:
/*We can use functions to access the data in a class.

Functions that access and/or modify data values in classes are called mutators.

Now let's add the setName function (functions in classes are also called methods) to our Student class. Recall the default for members in a class is private. 
We want the access functions to be public.
So we add the keyword "public" and all members listed after it are accessible:*/

class Student
{
        string name;
        int id;
        int gradDate;

    public:
        void setName(string name);

};

/* getDataValue.

Get functions return the data, so get functions have the variable type as a return variable.*/

//Note-2: 
//A complete example : 
class Student
{
        string name;
        int id;
        int gradDate;

    public:
        void setName(string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        string getName();
        int getId();
        int getGradDate();
        void print();
};

void Student::setName(string nameIn)
{
     name = nameIn;
}

void Student::setId(int idIn)
{
     id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
     gradDate = gradDateIn;
}

void Student::print()
{
     cout<<name<<" "<<id<<" "<<gradDate;
}

string Student::getName()
{
     return name;
}

int Student::getId()
{
     return id; 
}

int Student::getGradDate()
{
     return gradDate;
}

//Note-3:
//better example

//main.cpp
/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include"main.hpp"

int main()
{
    Cat cat1,cat2;
    cat1.setName("Kimmy");
    cat2.setName("Bobby");
    cat1.setBreed("calico");
    cat2.setBreed("main coon");
    cat1.setAge(4);
    cat2.setAge(1);

    cat1.printInfo();
    cout<<"\n";
    cat2.printInfo();
    cout<<"\n\n";
    //Alternate printing method
    cout<<cat1.getName()<<" "<<cat1.getBreed()<<" "<<cat1.getAge()<<"\n";
    cout<<cat2.getName()<<" "<<cat2.getBreed()<<" "<<cat2.getAge();
    return 0;
}

//main.hpp
/*Header file for main.cpp
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include<iostream>
using namespace std;

class Cat
{
    string name;
    string breed; 
    int age;
public:
    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
};

void Cat::setName(string nameIn)
{
    name = nameIn;
}

void Cat::setBreed(string breedIn)
{
    breed = breedIn;
}

void Cat::setAge(int ageIn)
{
    age = ageIn;
}
string Cat::getName()
{
    return name;
}
string Cat::getBreed()
{
    return breed;
}
int Cat::getAge()
{
    return age;
}
void Cat::printInfo()
{
    cout<<name<<" "<<breed<<" "<<age;
}

//Note-4:
/* A constructor is special function that is executed whenever we create a new instance of the class.
It is used to set initial values of data members of the class.

For example, in our Cats class we may want to have an initial value for the age of a cat and it's breed.
If we set initial values, we do not need to require the program or user set every value.
*/
/* 
public:
    Cats(); //declaring the constructor
    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
};
//defining the constructor
Cats::Cats()
*/

//Note-5:
/* 
Destructors are special class functions that are called whenever an object goes out of scope. 
Just like a constructor, a destructor is called automatically.

Destructors cannot:

   - return a value
   - accept parameters
Destructors must have the same name as the class.

Declaring a destructor:

~className()

*/ 

//Note-6 
//Helper Functions
//Example 
//main.cpp

#include "main.hpp"


int main()
{
    Gameboard game1;
    game1.setGameSpace(0,0,'x');
    game1.setGameSpace(0,1,'x');
    game1.setGameSpace(0,2,'x');
    game1.setGameSpace(0,3,'y');
    game1.setGameSpace(1,0,'x');
    game1.setGameSpace(2,0,'x');
    game1.setGameSpace(3,0,'x');
    game1.setGameSpace(3,1,'x');
    game1.setGameSpace(3,2,'x');
    game1.setGameSpace(3,3,'x');

    if(game1.fourInRow() == 1)
    {
        cout<<"X got four in a row!\n\n";
    }
    else
    {
        cout<<"X did not get four in a row :(\n\n";
    }
    game1.printInfo();
    return 0;
}
//main.hpp
#include <iostream>
#include <iomanip> 
using namespace std;

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard();
    void setGameSpace(int row,int column, char value);
    char getGameSpace(int row,int column);
    int fourInRow();
    void printInfo();
};

Gameboard::Gameboard()
{
    for(int i=0;i<4; i++)
        for(int j=0;j<4; j++)
        {
            gameSpace[i][j] = '-';
        }
}
void Gameboard::setGameSpace(int row,int column,char value)
{
    gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row,int column)
{
    return gameSpace[row][column];
}

int Gameboard::fourInRow()
{
    int count;
    for(int i=0;i<4; i++)
    {
        count = 0;
        for(int j=0;j<4; j++)
        {
            if(gameSpace[i][j]=='x')
            {
                count++;
                //cout<<"count = "<<count;
            }
        }
        if(count == 4)
            return 1;
    }
    return 0;
}
void Gameboard::printInfo()
{
    cout<<std::setw(5);
    cout<<"\n";
    for(int i=0;i<4; i++)
    {
        for(int j=0;j<4; j++)
        {
            cout<<gameSpace[i][j];
        }
        cout<<"\n";
    }
}


//Note-7:
/*User defined objects can be used just as any other object is used.

For example, we can use a user defined object in an array.

#include "main.hpp"

int main()
{
    const int SIZE= 3;
    //Create a course of students
    Student course1[SIZE];
    //Each array element is a Student type
    //so it has access to the members of Student
--> course1[0].setId(1000);

*/

//Note-8:
//this Pointer
/* C++ has a pointer called 'this'.

'this' returns its own address.

There are a few cases where 'this' might be necessary,
but often using it is considered a stylistic preference. */

 //Use 'this' to compare areas
 //The class functions
      int compareWithThis(Shape shape) 
      {
         //return the area of the calling shape
         return this->Area() > shape.Area(); 
      }

//Using the class function in a program
//In this case sh1.Area() is being compared to sh2.Area()

   if(sh1.compareWithThis(sh2)) {
      cout << "\nShape2 is smaller than Shape1" <<endl;
   } 
//perform the exact same function and not use 'this'.

     //'this' is not necessary to compare shapes
      int compare(Shape shapeIn) 
      {
         return Area() > shapeIn.Area();
      }

//use the class function:

   if(sh1.compare(sh2)) 
   {
      cout << "\nShape2 is smaller than Shape1" <<endl;
   } 
//Complete example

#include <iostream>
 
using namespace std;

class Shape {
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
		
	  //Use 'this' to compare areas
      int compareWithThis(Shape shape) 
      {
         return this->Area() > shape.Area();
      }

      //'this' is not necessary to compare shapes
      int compare(Shape shapeIn) 
      {
         return Area() > shapeIn.Area();
      }
      
   private:
      int length;     // Length of a box
      int width;
};

int main(void) 
{
   Shape sh1(4, 4);    // Declare shape1
   Shape sh2(2, 6);    // Declare shape2

   if(sh1.compare(sh2)) 
   {
      cout << "\nShape2 is smaller than Shape1" <<endl;
   } 
   else 
   {
      cout << "\nShape2 is equal to or larger than Shape1" <<endl;
   }

   if(sh1.compareWithThis(sh2)) {
      cout << "\nShape2 is smaller than Shape1" <<endl;
   } 
   else 
   {
      cout << "Shape2 is equal to or larger than Shape1" <<endl;
   }
   
   return 0;
}

//Note-9
/*
C++ allows class constructors to accept parameters. These parameters will set the values of class members when the object is created.

Let's look at an example of a Constructor with Parameters.*/

//main.cpp
#include "main.hpp"

int main()
{
    //an instance of Patient is
    //instanciated with a name
    Patient p1("Tammy Smith");  
    cout<<p1.getName();
    return 0;
}
//main.hpp

#include<iostream>
#include<string>
using namespace std;

class Patient
{
    private:
        string name;
    public:
        //The constructor accepts a name parameter
        Patient(string input);
        void setName(string input);
        string getName();
};

Patient::Patient(string input)
{
    //when an object is created
    //the name must be added as a parameter
    name = input;
}

void Patient::setName(string input)
{
    name = input;
}

string Patient::getName()
{
    return name;
}


