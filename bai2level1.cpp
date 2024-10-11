#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &a);
int giatrituyetdoi(int a);
void xuat(int kq);
int main()
{
	int a;
	nhap(a);
	int kq=giatrituyetdoi(a);
	xuat(kq);
	return 0;
}
void nhap(int &a)
{
	cin>>a;
}
int giatrituyetdoi(int a)
{
	int t= abs(a);
	return t;
}
void xuat(int kq)
{
	cout<<kq;
}
