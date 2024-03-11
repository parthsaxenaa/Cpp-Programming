#include<iostream>
using namespace std;
    
int main()
{
	string str="How Many Words7";
	int vowels=0,consonant=0,space=0,numbers=0;
	    
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		
		    vowels++;
		else if(str[i]==' ')
		
		    space++;
	    else if(str[i]=='1'|| str[i]=='2'|| str[i]=='3'|| str[i]=='4'|| str[i]=='5'|| str[i]=='6'|| str[i]=='7'|| str[i]=='8'|| str[i]=='9'|| str[i]=='0')
		      numbers++;
		    
		else
		    consonant++;
	}
	
	cout<<"vowels "<<vowels<<endl;
	cout<<"consonant "<<consonant<<endl;
	cout<<"nos. "<<numbers<<endl;
	cout<<"words "<<space+1<<endl;
	    
	return 0;
	    
}
    