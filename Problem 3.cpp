#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int
main ()
{
  float y,z;
  int a,x;

  z = 2.5;

  cout << "Enter x:";
  cin >> x;

  switch (x)
    {
    case 1:
    cout << "Enter y:";
	cin >> y;
     	if (1<y && y<5)
			{
			cout << fixed << showpoint << setprecision (2) <<"V = " << x*y*z;
      		}
		  else if (y >= 5)
			{
			cout << fixed << showpoint << setprecision (2) <<"V = " << x+(y/z);
	  		}
		  else
			{	
			cout << fixed << showpoint << setprecision (2) <<"V = " << x+y+z;
	  		}	  
      break;
    case 2:
    cout << "Enter y:";
	cin >> y;  
		if (y <= 5)
      		{ 
			a = abs(x-y);
			cout << fixed << showpoint << setprecision (2) <<"V = " << a/z;
      		}
		else
			{
			cout << fixed << showpoint << setprecision (2) <<"V = " << x-(sqrt(y+z));
			}
    	break;
    default:
    	cout << "Enter y:";
		cin >> y;  	
      		cout << fixed << showpoint << setprecision (2) << "V = "<< x+y+z;
    }
getch();
return 0;
}
