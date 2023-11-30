# include<iostream>
using namespace std;
    
/*program for multiplication table using for loop


*/
int main()
{
	int n,i;
	cout<<"enter a number";
	cin>>n;
	for(i=1;i<=10;i++)
	{
	    cout<<n<<" x "<<i<<" = "<<i*n<<endl;
	}
	return 0;
}