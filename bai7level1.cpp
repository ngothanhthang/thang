#include<iostream>
using namespace std;
void nhap(float &a,float &b ,float &c);
int kiemtratamgiac(float a,float b,float c);
void xuat(int d,float a,float b,float c);
int main()
{
	float a,b,c;
	nhap(a,b,c);
	int d=kiemtratamgiac(a,b,c);
	xuat(d,a,b,c);
	return 0;
}
void nhap(float &a,float &b, float &c)
{
	cin>>a>>b>>c;
}
int kiemtratamgiac(float a,float b,float c)
{
	if(a<b+c && b<a+c && c<a+b && a>0 && b>0 && c>0)
	return 1;
	else 
	return 0;
}
void xuat(int d,float a,float b,float c)
{
	if(d==1)
		cout<<"la 3 canh cua mot tam giac"<<endl;
	else
		cout<<"khong tao thanh tam giac"<<endl;
}
