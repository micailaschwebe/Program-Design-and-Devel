/*******************************************************************************
*                                                                              *
*       Micaila Schwebe                       8 March 2018                     *
*       CSC 110-401                           Lab 3                            *
*                                                                              *
*       This lab is to figure out if a year is or is not a leap year and       *
*       century.                                                               *
*                                                                              *
*******************************************************************************/

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int year, leapCode;
    char another;
    bool ok=false;
    do
    {
         while(!ok)
         {
                   ok=true;
                   cout<<"Please enter a year in the range 400 to 2400AD:\t";
                   cin>>year;
                   if((year<=2400)&&(year>=400));
                       if(year%4!=0)
                          leapCode=1;
                   else
                       if(year%100!=0)
                           leapCode=2;
                   else
                       if(year%400!=0)
                           leapCode=3;
                   else
                           leapCode=4;
                   else
                           leapCode=5;
                   switch(leapCode)
                   {
                                   case 1:
                                        cout<<"The year "<<year<<" is not a leap year:\n";
                                        break;
                                   case 2:
                                        cout<<"The year "<<year<<" is a leap year:\n";
                                        break;
                                   case 3:
                                        cout<<"The year "<<year<<" is a century, but not a leap century:\t";
                                        break;
                                   case 4:
                                        cout<<"The year "<<year<<" is a leap century:\n";
                                        break;
                                   case 5:
                                        cout<<"The year "<<year<<" is out of range:\n";
                                        ok=false;
                   }
         }
         cout<<"Do you have another year to process <Y or N>?:\t";
         cin>>another;
         if((another=="Y")||(another=="y"))
         {
                                           system("PAUSE");
                                           system("CLS");
         }
         { while ((another=="Y")||(another=="y"));
         return 1;
         }
                                   
                                   
                                   
                   
                       
                   
    system("PAUSE");
    return EXIT_SUCCESS;
} //end program
