#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int check(int a, int b)
{
	bool x;
	x=(a%7==0&&b%7==0);
	return x;
	
}
int main()
{
	int a,b;
	cin>>a>>b;
	if(check(a,b)==1)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	
}
