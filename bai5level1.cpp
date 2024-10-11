#include<iostream>
using namespace std;
void nhap(int &n);
int timnamnhuan(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq=timnamnhuan(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int timnamnhuan(int n)
{
	if(n%100==0 && n%4==0)
	{
		return 1;
	}
	else if(n%4==0 && n%100!=0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
void xuat(int kq)
{
	if(kq==1)
	cout<<"la nam nhuan"<<endl;
	else
	cout<<"khong la nam nhuan"<<2endl;
}
