#include <iostream.h>
#include <conio.h>
void main() {
	int x=0,y=0,z=1,n,i;
	cout<<"Enter nth term: ";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cout<<endl<<y;
		x=y+z;
		y=z;
		z=x;
	}
	getch();

}
