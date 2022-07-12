/* 
We have been using the C++ standard function library throughout this course (recall I/O streams, string, etc.).
Well, there is actually another part of the Standard C++ library, the object oriented class.

The Object oriented library has many containers that are quite useful for programming.

We will create a vector of integers, called vectorInts.

You should notice the following:

We included a C++ library called vector
To instantiate a vector :

std::vector<int> vectorInts; 

The vector has size 0 when we instantiate it.
We use 'resize' to change the size of the vector. */ 

// constructing vectors
#include <iostream>
#include <vector>  //Need to include the vector library!


int main ()
{
  //creating a vector of integers
  std::vector<int> vectorInts;  
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
  //Changing the size of vectorInts to 6
  vectorInts.resize(6);
  std::cout<<"\n\nvectorInts now has "<<vectorInts.size()<<" elements\n";
 
  return 0;
}
//output: vectorInts has 0 elements ; vectorInts now has 6 elements. 


//Note-2
//How to use assign and iterator? 

/*Vectors are more versatile than arrays, and can be resized during runtime.
We can also insert elements into a vector.

This characteristic adds a lot of freedom to vectors that we don't have with arrays. 
It also means we have to adjust how we access elements in a vector.
Since we can add elements anywhere in the vector,
we do not refer to the first element of a vector as the zero element, we call it the beginning.
The last element is called end. To keep track of where we are in the vector, we need an iterator. */

// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it

//TODO: Add the necessary libraries
#include "main.hpp"

int main ()
{
  //TODO: create a vector of floats
   vector<float> vFloat;

  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";

  //TODO: add elements to the library

  std::cout<<"\n\nAdding 10 elements to the vector\n";

  //TODO: assign the value 8.8 to 10 elements of the vector
   vFloat.assign(10, 8.8);
   std::cout<<"vFloat has "<<vFloat.size()<<" elements\n"; 


  //TODO: Complete the Print function in main.hpp 
  // Call the function here to print out each element of vFloat
  printVector(vFloat);

  return 0;
}

//A sample solution of main.hpp

// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<float> vIn);

 void printVector(vector<float> vIn)
 {//printing the contents of vIns
    //TODO: Complete the function 
    vector<float>::iterator it;
    for (it = vIn.begin(); it != vIn.end(); ++it)
        cout<<*it<<" ";
 }

//But be careful!: ::Assign writes over the elements in the vector.


//Note-3:
//We can add elements to the end (or back) of a vector using ::push_back.
//for ex: 

vectorInts.push_back(24);
vectorInts.push_back(25);
vectorInts.push_back(26);

//Note-4
/*
insert is another method to add elements to a vector.

insert adds elements to the location after the iterator.

To add elements using insert:

Set the iterator to one before the location where you would like to add an element.
Use insert to add the element.


Before we insert, we need to set the iterator to a known destination. 
In this case we set it to the beginning of the vector plus one.

  it  = vectorInts.begin() + 1;
  
To insert the element we need to give the insert location and the value of the element.
In this case the location is the location of the iterator (begin + 1). The value is -1.

vectorInts.insert(it, -1);

Also note in the program below, I reset the iterator to the beginning of the vector before inserting the next value.

You need to do this after an insert because all iterator locations are invalid after an insert.*/ 


//Note-5:
/* emplace.

Emplace puts an element in a vector at the position pointed to by the iterator. 
Insert copies the values of the vector while emplace does an in-place insertion.
*/ 
//Sample example

// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

  void printVector(vector<int> vIn);
  void assignFunction(vector<int> vInts, int in);
  void pushBackFunction(vector<int> vInts, int in);
  void emplaceFunction(vector<int> vInts, int loc, int in);

 void printVector(vector<int> vIn)
 {//printing the contents of vIns
  vector<int>::iterator it;

  for (it = vIn.begin(); it != vIn.end(); ++it)
    std::cout<<*it<<" ";
 }

  void assignFunction(vector<int> vInts, int in)
  {
      cout<<"\nassigning "<<in<<" and printing the vector\n";
      vInts.assign(1, in);
      printVector(vInts);
  }
  void pushBackFunction(vector<int> vInts, int in)
  {
      cout<<"\npush back "<<in<<" and printing the vector\n";
      vInts.push_back(in);
      printVector(vInts);
  }
  void emplaceFunction(vector<int> vInts,  int loc, int in)
  {
      vector<int>::iterator it;
      cout<<"\nemplacing "<<in<<" and printing the vector\n";
      it  = vInts.begin() + loc;
      vInts.emplace(it, in);
      printVector(vInts);
  }

//Note-6
//We can remove all elements from the vector at the same time using the method ::clear.
//We can remove specific elements from a vector using ::erase.
//We can remove the last element of a vector using ::pop_back.






