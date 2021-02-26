#include<iostream>
#include<math.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    //gan gia tri cho mang a
    for (int i=1;i<=n;i++)
    {
      cin>>a[i];
    }
    //gan gia tri lon nhat
    int max=a[1];
    for(int i=1;i<=n;i++)
    {
        if ( max < a[i] )   { max = a[i]; }
    }
    //gan gia tri nho nhat
    int min=a[1];
    for(int i=1;i<=n;i++)
    {
        if ( min > a[i] )   { min = a[i]; }
    }
    cout<<"Mean: "<<(max+min)/2;
    cout<<"\nMax: "<<max;
    cout<<"\nMin: "<<min;
    return 0;
}
