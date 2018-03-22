/******************************************************************************
*                                                                             *
*    Micaila Schwebe                           6 March 2018                   *
*    CSC 110-401                               Program #2                     *
*                                                                             *
*   This is program 2. It will calculate the total distance in miles and the  *
*   average miles per hour.                                                   * 
******************************************************************************/

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MINUTES_IN_HOUR=60;
const int FEET_IN_MILE=5280;
const float FEET_PER_STRIDE=2.5;

int main()
{
    string fName, lName, fullName;
    int firstMin, lastMin, hours, minutes, avgStridesPerMin;
    float feetPerMin, totalMins, totalFeet, mph, miles;
    
    cout<<"Please enter your first and last name seperated by a space:\n";
    cin>>fName>>lName;
    cout<<"Please enter number of hours in running time:\t";
    cin>>hours;
    cout<<"Please enter number of minutes in running time:\t";
    cin>>minutes;
    cout<<"Please enter the number of strides jogging in your first minute:\t";
    cin>>firstMin;
    cout<<"Please enter the number of strides jogging in your last minute:\t";
    cin>>lastMin;
    avgStridesPerMin=(lastMin+firstMin)/2;
    totalMins=MINUTES_IN_HOUR*hours+minutes;
    feetPerMin=FEET_PER_STRIDE*avgStridesPerMin;
    totalFeet=totalMins*feetPerMin;
    miles=totalFeet/FEET_IN_MILE;
    mph=miles/(totalMins/MINUTES_IN_HOUR);
    cout<<"Full name:/t/t"<<lName<<fName<<endl;
    cout<<"First minute strides:\t\t"<<firstMin<<endl;
    cout<<"Last minute strides:\t\t"<<lastMin<<endl;
    cout<<"Average strides per minute:\t\t"<<avgStridesPerMin<<endl;
    cout<<"Running time in the format h:mm:\t\t"<<hours<<minutes<<endl;
    cout<<"Total distance in miles:\t\t"<<miles<<endl;
    cout<<"Average miles per hour:\t\t"<<mph<<endl;
    
    system("PAUSE");
    
    return 1;
}

/*
Please enter your first and last name seperated by a space:
Jarrod Smith
Please enter number of hours in running time:   1
Please enter number of minutes in running time: 9
Please enter the number of strides jogging in your first minute:        205
Please enter the number of strides jogging in your last minute: 210
Full name:/t/tSmithJarrod
First minute strides:           205
Last minute strides:            210
Average strides per minute:             207
Running time in the format h:mm:                19
Total distance in miles:                6.76278
Average miles per hour:         5.88068
Press any key to continue . . .
*/
