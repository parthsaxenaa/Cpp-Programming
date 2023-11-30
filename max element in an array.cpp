# include<iostream>
using namespace std;
    
/*program for finding max elements in array

*/
int main()
{
	int a[7]={4,8,6,9,5,2,7};
	int n=7,max;
	for(int i=0;i<7;i++)
	{
		if(a[i]>max)
		{
		      max=a[i];
		}
	}	
	cout<<"maxmium no is"<<max;
	return 0;
}
