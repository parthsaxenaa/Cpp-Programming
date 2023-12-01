# include<iostream>
using namespace std;
    
/*program for draw pattern 1 using nested for loop

*/
int main()
{
	int count=1;
	for(int i=0;i<4;i++)
	{
	     	for(int j=0;j<4;j++)
		{
		    cout<<count<<" ";
		    count++;
		}
		cout<<endl;
	}
	return 0;
}