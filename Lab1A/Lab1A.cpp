///////////////////////////////////////////////////////////////////////
//
// Filename: Lab1A.cpp
// Date: May 16, 2017
// Programmer: Jordan Hensley
//
// Description:
//    Approximate the amount of money users should expect to spend on gas,
//    based on distance traveled, fuel economy and current gas prices .
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    // Declaring varibales
    string destination;
    float mpg;
    float miles;
    float gasprice;
    
    //Destination prompt
    cout << "Please enter your destination: ";
    cin >> destination;
    
    //Fuel Economy prompt
    cout << "Please enter car's fuel economy in miles per gallon: ";
    cin >> mpg;
    
    //Distance prompt
    cout << "Please enter your travel distance in miles: ";
    cin >> miles;
    
    //gas price prompt
    cout << "Please enter the price of gas per gallon: ";
    cin >> gasprice;

    //Gas money needed
    float gasmoney = (gasprice/mpg) * miles;
    
    //Formating Float to 2 decimal places
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    
    // Output of money spent on gas
    cout << "Amount spent on fuel to " << destination << " : $" << gasmoney << endl;
    
    //End
    return 0;

}
