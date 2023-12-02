#include <iostream>
using namespace std;

int main()
{
    int a[2][3]={{2,3,4},{5,6,7}};//here we decleare an 2D array named "a". 
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]; //here it will give all value of the array 
        }
        cout<<endl; //we give endl to show it in next line so, it can be visible as matrix.
    }
}