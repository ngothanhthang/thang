#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void nhap(float &n);
int layphannguyen(float n);
int main()
{
	float n;
	nhap(n);
	int a=layphannguyen(n);
	if(n-a==0)
	{
		n=n-1;
		cout<<n<<endl;
	}
	else
	{
		cout<<a<<endl;
	}
	return 0;
}
void nhap(float &n)
{
	cin>>n;
}
int layphannguyen(float n)
{
	cout<<setprecision(0)<<endl;
	int a=n;
	return a;
}

