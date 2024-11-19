#include<iostream>
using namespace std;
void nhap(int &a, int &b);
int timnghiem(int a,int b,float &nghiem);
void xuat(int c, float thuong);
int main()
{
	int a,b;
	nhap(a,b);
	float nghiem;
	int c=timnghiem(a,b,nghiem);
	xuat(c,nghiem);
	return 0;
}
void nhap(int &a, int &b)
{
	cin>>a>>b;
}
int timnghiem(int a,int b,float &nghiem)
{
	if(a==0 &&b==0)
		return 0;
	else if(a==0 && b!=0)
		return 1;
		else
		{
			nghiem=(float)-b/a;
			return 3;
		}
}
void xuat(int c, float thuong)
{
	if(c==0)
		cout<<"phuong trinh vo so nghiem";
	else if(c==1)
		cout<<"phuong trinh vo nghiem";
		else
			cout<<"phuong trinh co nghiem x="<<" "<<thuong;
}
