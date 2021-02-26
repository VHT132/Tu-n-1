#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
double khoangcach(double x1, double y1, double x2, double y2)
{
	double d;
	d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	return d;
}
int main()
{
	double x1,y1,x2,y2;
	cout<<"nhap toa do x1: ";
	cin>>x1;
	cout<<"nhap toa do y1: ";
	cin>>y1;
	cout<<"nhap toa do x2: ";
	cin>>x2;
	cout<<"nhap toa do y2: ";
	cin>>y2;
	
	cout<<"Distance= " <<fixed << setprecision (2)<<khoangcach(x1,y1,x2,y2);
}
