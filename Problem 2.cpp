#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{    
    float x,y,z;
   		cout<<"Enter the the meter readings this month (in gallons):"; 
		   cin >> x; 
    	cout<<"Enter the the meter readings from the previous month (in gallons):"; 
		cin >> y; 
    	cout<<"Enter your unpaid balance: P";
		cin >> z; 
    if (z > 0)
    {
     cout <<"Your bill is: P " << fixed << showpoint << setprecision (2) << (35+(x*1.10)+(y*1.10)+20+z); 
    }
	else
    {
    cout <<"Your bill is: P " <<fixed << showpoint << setprecision (2) << (35+(x*1.10)+(y*1.10));
	}
 	_getch();
    return 0;
}
