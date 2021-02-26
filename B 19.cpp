#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int check(int x, int y, int z)
{
	bool b;
	b=((x>=y&&y>=z)||(x<=y&&y<=z));
	return b;
	
}
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	if(check(x,y,z)==1)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	
}
