#include<iostream>
using namespace std;
void nhap(int &a, int &b);
int tinhthuong(int a, int b, float &thuong);
void xuat(int c, float thuong);
int main()
{
	int a,b;
	float thuong;
	nhap(a,b);
	int c=tinhthuong(a,b,thuong);
	xuat(c,thuong);
}
void nhap(int &a, int &b)
{
	cin>>a>>b;
}
int tinhthuong(int a, int b, float &thuong)
{
	if(b==0)
	return 0;
	else
	{
		thuong=(float)a/b;
		return 1;
	}
}
void xuat(int c, float thuong)
{
	if(c==0)
		cout<<"khong chia duoc";
	else
		cout<<thuong;
}


