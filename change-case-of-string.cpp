#include <iostream>

using namespace std;

int main()
{
    string str= "weLcome7";
    //change case of letter to upper case
    
    
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    cout<<"upper char string is: "<<str<<endl;
    

    return 0;
}