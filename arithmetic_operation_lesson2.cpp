

//Note-1: 
/*There is cmath library for arithmetic operations*/
//Here is an example for it:

#include<iostream>
#include<cmath>

int main()
{

    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;
    
    float volCone = 0;
    //m_pi is the pi value. 
    volCone = M_PI * std::pow(coneRadius,2) * coneHeight/3;
    
    std::cout<<volCone; //857.985
    
    return 0;
}

//other operations are so similar with Python. a -=a
