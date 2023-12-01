/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
     int a[10],n=10;
	int key;
	cout<<"enter numbers";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter key";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		if(key==a[i])
		{
			cout<<"found at"<<i;
			return 0;
		}
	}	
	cout<<"not found";
    return 0;
}