#include<iostream>
using namespace std;
void nhap(double &a, double &b);
double chuvi(double a, double b);
void xuat(double cv);
int main()
{
	double a,b;
	 nhap(a,b);
	 double cv=chuvi(a,b);
	 xuat(cv);
	 return 0;
}
void nhap(double &a, double &b)

{
	  cin>>a>>b;
}
double chuvi(double a,double b)
{  
      int t=(a+b)*2;
      return t;
}
void xuat(double cv)
{
	   cout<<cv;
}



