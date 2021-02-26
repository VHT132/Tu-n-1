#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
double S(double a, double b, double c, double s)
{
	int S;
	S= sqrt(s*(s-a)*(s-b)*(s-c));
	return S;
	
}
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	double s=(a+b+c)/2;
	cout<<"S= "<<fixed << setprecision (2)<<S(a,b,c,s);
}
