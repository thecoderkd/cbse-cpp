#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
main() {
	clrscr();
	int i,j,len,flag=0;
	char a[20];

	cout<<"Enter a word  ";
	gets(a);

	len=strlen(a);


	 for(i=0,j=len-1;i<len/2;i++,j--)
	   { 
	   	if(a[i]==a[j])
	   		flag=1;
	   	else {
	   		flag=0;
	   		break;
	   }

	}
	   if(flag==1)
	    cout<<"It is a Palindrome \n";
		else cout<<"It is not a Palindrome \n";	

	getch();
	return 0;
}
