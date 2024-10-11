#include<iostream>
using namespace std;
void nhap(int &x,int &y);
int tinhtong(int x, int y);
void xuat(int c);
int main()
{
	int a,b;
	nhap(a,b);
	int c=tinhtong(a,b);
	xuat(c);
	return 0;
}
void nhap(int &x,int &y)
{
	cin>>x>>y;
}
int tinhtong(int x, int y)
{
	int t=x+y;
	return t;
}
void xuat(int c)
{
	cout<<c;
}

