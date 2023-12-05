#include <iostream>

using namespace std;

int main()
{
    string email="parthsaxena0852@gmail.com";
    int i=(int)email.find('@');
    
    string uname=email.substr(0,i);
    cout<<"user name is "<<uname<<endl;

    return 0;
}