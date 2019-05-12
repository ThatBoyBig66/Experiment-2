#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
int main()
{
	char x;
	double y,z;
	cout <<"Which package did you purchased?" <<endl;
	cin >> x;

	switch (x)
		{
		case ('A'):
		case ('a'):
				cout <<"Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr. \n";
				cout <<"How many hours did you use?" <<endl;
				cin >> y;
			if (y<=10)
				{
				z= 995;
				cout <<"The total amount due is: P" << z <<".00";
				}
			else
				{
				z= (995+((y-10)*20));
				cout <<"The total amount due is: P" << fixed << showpoint << setprecision (2) <<z;
				}
			break;
		case ('B'):
		case ('b'):
				cout <<"Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr. \n";
				cout <<"How many hours did you use?" <<endl;
				cin >> y;
			if (y<=20)
				{
				z= 1495;
				cout <<"The total amount due is: P" << z<<".00";
				}
			else
				{
				z= (1495+((y-20)*10));
				cout <<"The total amount due is: P" << fixed << showpoint << setprecision (2) <<z;
				}
				break;
		case ('C'):
		case ('c'):
				cout <<"Package C: For P1995/mo of unlimited access is provided. \n";
				z=1945;
				cout <<"The total amount due is: P" << z<<".00";
				break;
		default:
			cout << "INVALID";
		break;	
		}
	getch();
	return 0;
} 
