#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>

using namespace std;

main()
{
	char s[100];
	char x[1];
	cout<<"nhap xau ki tu: ";
	gets(s);
	cout<<"xau vua nhap la: "<<s<<endl;
	cout<<"nhap ki tu can xoa: "<<x;
	gets(x);
	int l=strlen(s);
	int lm=l;
	for (int i=l-1; i>=0; i--)
		{
			if ( s[i]==x[0])
				{
					int j=i;
					lm=lm-1;
					for(int k=j; k<l-1; k++)
						s[k]=s[k+1];
				}
		}
	for(int j=0; j<lm; j++)
		cout<<s[j];
}