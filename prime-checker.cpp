#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void main(){ 
    int n, i, flag=1;

    cout<<"Enter a positive integer: ";
  	cin>>n;
 for (i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
           flag=0;
           break;
        }
    }
    if(n==1)
       cout<<n<<" is not a Prime number"<<endl;

    else if(n==0)
       cout<<n<<" is not a Prime number"<<endl;
     
    else if(flag)  
      cout<<n<<" is a Prime number"<<endl;

    else
         cout<<n<<" is not a Prime number"<<endl; 

    getch();
}
