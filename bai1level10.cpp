#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int chuyenhe16sanghe10(char S[]);
void xuat(int t);
int main()
{
	char S[20];
	cin>>S;
	int t=chuyenhe16sanghe10(S);
	xuat(t);
	return 0;
}
int chuyenhe16sanghe10(char S[])
{
	strrev(S);
	int n=0;
	int len=strlen(S);
	for(int i=0;i<len;i++)
	{
		if(S[i]>='0'&& S[i]<='9')
			n=n+(S[i]-'0')*pow(16,i);
		else
			n=n+(S[i]+10-'A')*pow(16,i);
	}
	return n;		
}
void xuat(int t)
{
	cout<<t;
}
