//Note-1:

/*
In C++ we can derive a class from another class, called a base. 
The derived class can access members and functions of the base class.
We say the derived class has inherited from the base class. */ 

//main.cpp

#include"main.hpp"

int main()
{
    //Create an instance of the derived class, 
    //GradStudent
    GradStudent gs1;
    
    //Set the id of the grad student
    //using the function in the base class
    gs1.setId(123456789);
    
    //Set the degree of the grad student
    //using the function in the derived class
    gs1.setDegree("BSEE");
    
    cout<<gs1.getId()<<" "<<gs1.getDegree();
    return 0;
}
//main.hpp

#include<iostream>
#include<string>
using namespace std;

//The base class
class Student
{
    private:
        int id;
    public:
        void setId(int idIn);
        int getId();
        Student();
};

Student::Student()
{
    id = 000000000;
}

void Student::setId(int idIn)
{
    id = idIn;
}

int Student::getId()
{
    return id;
}

//The derived class with Student as base class
class GradStudent : public Student
{
    private:
        string degree;
    public:
        GradStudent();
        void setDegree(string degreeIn);
        string getDegree();
};

GradStudent::GradStudent()
{
    degree = "undelcared";
}
void GradStudent::setDegree(string degreeIn)
{
    degree = degreeIn;
}
string GradStudent::getDegree()
{
    return degree;
}

//Look at the line: class GradStudent: public Student
/* 
The access control before the base class (in this case 'public') determines the access of the inherited class.

There are three types of access control: public, private, and protected.

Public Inheritance means all public members of the base class are accessible to the derived class
Private Inheritance means all members of the base class are private to the derived class
Protected Inheritance means all members of the base class are protected to the derived class.
It is very rare to have a protected or private inheritance,
the vast majority of the time inheritance is public. */

//for private inheritance: 
//The derived class with Student as base class
class GradStudent : private Student
{
    private:
        string degree;
    public:
        GradStudent();
        void setDegree(string degreeIn);
        string getDegree();
        void setStudentId(int idIn); //need this to access Student::setId()
        int getStudentId(); //need this to access Student::getId()
};

//Note-2:

//Multiple Inheritance: C++ classes can inherit from more than one class.
// class TeachingAssociate: public Staff, public GradStudent


