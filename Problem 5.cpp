#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int i,n1,n2,n3,n;
	n1=0;
	n2=1;
	n=22;
	cout <<"Fibonacci numbers:"<<endl;
	for (i=0;i<n;i++)
	{
		if (i<=1)
		{
			n3=i;
		cout<<n3<<",";
		}
		else 
		{
			n3=n1+n2;
			n1=n2;
			n2=n3;
				if (n3==10946)
				{
				cout <<"10946" <<endl;
				continue;
				}	
				else	
				{
				cout<<n3<<",";
				}
		}

		}
	
	return 0;
}
