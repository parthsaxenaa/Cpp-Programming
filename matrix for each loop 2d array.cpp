
#include <iostream>

using namespace std;

int main()
{
    int a[2][3]={2,3,4,5,6,9};
    for(auto& x:a)//for using for each loop we need reference 
    //thats why we have taken & after auto otherwise it give an error
    {
        for(auto& y:x)//values of a stored in x AND values of x storedin y further
        //thereby we print y for the matrix
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;
}