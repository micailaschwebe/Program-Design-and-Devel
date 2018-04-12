/******************************************************************************
*    Micaila Schwebe                                          5 April 2018    *
*    CSC 110                                                  Lab 4           *
*                                                                             *
*    This program calculates the cost of a pizza by inputing the diameter of  *
*    a pizza and the number of toppings.                                      *
******************************************************************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const float COST_PER_SQIN=0.07;
const float COST_PER_TOPPING=1.25;
const float PI=acos(-1);

//function prototype
float ComputeCost(int diameterf, int numberOfToppingsf);

int main()
{
    //local identifiers
    int diameter, numberOfToppings;
    float pizzaCost;
    char another;
    
    do
    {
         cout<<"Please enter the diameter of a pizza.:\t";
         cin>>diameter;
         cout<<"Please enter the number of toppings.:\t";
         cin>>numberOfToppings;
         pizzaCost=ComputeCost(diameter, numberOfToppings);
         cout<<"The cost of a"<<diameter<<" inch pizza with"<<numberOfToppings<<"toppings is $:\t";
         cout<<fixed<<showpoint<<setprecision(2);
         cout<<pizzaCost<<endl;
         cout<<"Do you have another pizza to process <Y or N>?:\t";
         cin>>another;
             if((another=='Y')||(another=='y'))
             {
                  system("PAUSE");
                  system("CLS");
             }
}while((another=='Y')||(another=='y')); 
    system("PAUSE");
    return 1;
}

float ComputeCost(int diameterf, int numberOfToppingsf)
{
      float radius,area,pieCost,toppingsCost,totalCost;
      radius=diameterf*.5;
      area=PI*radius*radius;
      pieCost=area*COST_PER_SQIN;
      toppingsCost=numberOfToppingsf*COST_PER_TOPPING;
      totalCost=pieCost+toppingsCost;
      return totalCost;
}

/*Please enter the diameter of a pizza.:  9
Please enter the number of toppings.:   3
The cost of a9 inch pizza with3toppings is $:   8.20
Do you have another pizza to process <Y or N>?:
       
Please enter the diameter of a pizza.:  5
Please enter the number of toppings.:   4
The cost of a5 inch pizza with4toppings is $:   6.37
Do you have another pizza to process <Y or N>?:




