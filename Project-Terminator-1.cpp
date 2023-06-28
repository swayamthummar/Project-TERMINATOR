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
    		throw 10; 
    	}
    	else
    	{
    		c=a/b;
    		cout<<"Answer ="<<c<<endl;
    	}
    }
	catch (int n)
	{
		cout<<answer;
	}
	catch (char m)
	{
		cout<<"Cannot Divide By ZERO.";
	}

	return 0;
}
