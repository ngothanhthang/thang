#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void nhap(float &n);
void xuat(float n);
int main()
{
	float n;
	nhap(n);
	xuat(n);
	return 0;
}
void nhap(float &n)
{
	cin>>n;
}
void xuat(float n)
{
	cout<<setprecision(0)<<fixed;
	cout<<n;
}

