#include<iostream>
using namespace std;
void nhap(int &a, int &b);
int solonnhat(int a, int b);
void xuat(int t);
int main()
 {
 	     int a,b;
 	     nhap(a,b);
 	     int t=solonnhat(a,b);
 	     xuat(t);
 	     return 0;
 }
 void nhap(int &a, int &b)
 {
 	   cin>>a>>b;
 }
 int solonnhat(int a, int b)
 {
 	    int c=max(a,b);
 	    return c;
 }
 void xuat(int t)
 {
 	    cout<<t;
 }
