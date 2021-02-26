#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	double w,h;
	cout<<"Weight= ";
	cin>>w;
	cout<<"Height= ";
	cin>>h;
	double BMI;
	BMI=w/pow(h,2);
	cout<<"BMI= "<<fixed << setprecision (2)<<BMI;
	
	
}
