#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int a=500,b=150,c;
	char answer[]= "Cannot Divide By ZERO.";
	
	try
	{
    	if (b==0)
    	{
    		throw answer; 
    	}
    	else
    	{
    		c=a/b;
    		cout<<"C ="<<c<<endl;
    	}
    }
	catch (...)
	{
		cout<<"Cannot Divide By ZERO.";
	}
	return 0;
}
