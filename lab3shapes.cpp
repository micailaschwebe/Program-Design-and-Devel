/******************************************************************************
*    Micaila Schwebe                                          4 April 2018    *
*    CSC 110                                                  Lab 3           *
*                                                                             *
*    This program uses nested loops to create geometric square, diamond, or   *
*    rectangle.                                                               *
******************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char option, another, designChar;
    bool ok;
    int base, height, side, halfHeight;
    
    do 
    {
       cout<<"Welcome to Acorn's World of Shapes!:\n";
       cout<<endl;
       cout<<"Please choose from the following shapes:\n";
       cout<<"\t"<<"D:Diamond\n";
       cout<<"\t"<<"S:Square\n";
       cout<<"\t"<<"R:Rectangle\n";
       cin>>option;
       ok=true;
       
       switch(option)
          {
             case 'D':
             case 'd':
                  cout<<"Please enter the half height for your diamond.:\t";
                  cin>>halfHeight;
                  cout<<"Please enter the design character for your diamond.:\t";
                  cin>>designChar;
                  for(int i=0; i<halfHeight; i++)
                  {
                      for(int s =0; s<halfHeight-i-1; s++)
                      {
                         cout<<" ";
                      }
                      for(int j=0; j<2*i+1; j++)
                      { 
                         cout<<designChar;
                      }  
                      cout<<endl;
                  }
                  
                  for(int i=halfHeight-2; i>=0; i--)
                  {
                      for(int s =0; s<halfHeight-i-1; s++)
                      {
                         cout<<" ";
                      }
                      for(int j=0; j<2*i+1; j++)
                      { 
                         cout<<designChar;
                      }  
                      cout<<endl;
                  }
                  break;
             case 'R':
             case 'r':
                  cout<<"Please enter the base and height of the rectangle seperated by a space.:\t";
                  cin>>base>>height;
                  cout<<"Please enter the design character for the rectangle:\t";
                  cin>>designChar;
                  
                  for(int i=0; i<height; i++)
                  {
                      for(int j=0; j<base; j++)
                      cout<<designChar;
                      cout<<endl;
                  }//end for loop
                  break;
             case 'S':
             case 's':
                  cout<<"Please enter the length of the side of your square.:\t";
                  cin>>side;
                  cout<<"Please enter the design character for your square.:\t";
                  cin>>designChar;
                  
                  for(int i=0; i<side; i++)
                  {
                        for(int j=0; j<side; j++)
                        cout<<designChar;
                        cout<<endl;
                  }
                  break;
             default:
                     cout<<"Invalid input, please try again.:\t";
                     ok=false;
          } //end switch option  
       if(!ok)
       {
          system("PAUSE");
          system("CLS");
       }   
       else
       {   
       cout<<"Would you like to build another shape <Y or N>:\t";
       cin>>another;
              if((another=='Y')||(another=='y'))
              ok=false;
       }//end if not okay
              system ("CLS");
    }while(!ok);//end do..while

    return 1;
}//end program

/*
Welcome to Acorn's World of Shapes!:

Please choose from the following shapes:
        D:Diamond
        S:Square
        R:Rectangle
d
Please enter the half height for your diamond.: 7
Please enter the design character for your diamond.:    *
      *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      *
Would you like to build another shape <Y or N>:





