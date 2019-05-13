#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i;
	
	cout << "Counting..." <<endl;
	
	i=1;
	
	for (i=1;i<=10;i++)
	{
		cout <<i<< ", ";
		if (i==10) 
		break;
	}
	for (i=12;i<=30;i+=2)
	{
	
		if (i==30)
		{
		cout <<"30" <<endl;
		continue;
		}
		else
		{
		cout <<i<< ", ";
		}
	}
	_getch();
	return 0;
}
