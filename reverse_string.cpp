#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
  char a[20],x;
  int i=0,j=0;
  clrscr();

  cout<<"Enter a string: ";
  gets(a);
  j=strlen(a)-1;

  while(i<j)
   {
     x=a[i];
     a[i]=a[j];
     a[j]=x;
     i++;
     j--;
   }

 cout<<"Reverse string is: "<<a;
 getch();
}
