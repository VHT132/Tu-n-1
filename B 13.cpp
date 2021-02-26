#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
double khoangcach(int x, int y)
{
	double d;
	d=sqrt(x*x+y*y);
	return d;
}
int main()
{
	double x,y;
	cout<<"nhap toa do x: ";
	cin>>x;
	cout<<"nhap toa do y: ";
	cin>>y;
	cout<<"Distance= " <<fixed << setprecision (2)<<khoangcach(x,y);
}
