#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i,n,sum;
	bool userquit = false;

do	
{
	sum=0;
	cout <<"Enter a number:";
	cin >> n;
	{
		if (n<1)
			{
				cout<<"Thank you!";
				userquit=true;
			}
		else
			{
				for(i=1; i <= n; ++i)
				{
					sum += i;
				}
					cout <<"The sum of all numbers from 1 to "<<n<<" is "<<sum<<endl;
			}
	}
} 
while (!userquit);
	
	_getch();
	return 0;
}
