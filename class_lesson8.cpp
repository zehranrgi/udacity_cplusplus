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
