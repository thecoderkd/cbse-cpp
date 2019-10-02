#include <iostream.h>
#include <conio.h>
void main(){
	clrscr();
	int i,j,k,n,a[5],temp;
	for(k=0;k<5;k++)
	{
		cin>>a[k];
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	for(n=0;n<5;n++)
	{
		cout<<a[n]<<endl;
	}
	getch();
}
