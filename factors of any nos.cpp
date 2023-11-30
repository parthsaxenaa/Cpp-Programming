# include<iostream>
using namespace std;
    
/*program for finding factors of a number


*/
int main()
{
	int i,n;
	cout<<"enter the number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	     if(n%i==0)
	     {
		cout<<i<<endl;
	     }
	}
	return 0;
}
