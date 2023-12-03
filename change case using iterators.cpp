#include <iostream>

using namespace std;

int main()
{
    string str= "welcome";
    string::iterator it;
    //change case of letter to upper case
    
    
    for(it=str.begin();it!=str.end();it++)
    {
        *it = *it-32;
    }
    cout<<"upper char string is: "<<str<<endl;
    

    return 0;
}