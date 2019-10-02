#include <iostream.h>
#include <conio.h>
#include <stdio.h>

struct Student {
	int rollno;
	char name[30];
	int cl;
};

Student stud_data[3];
void enter(void);
void display(int a);

int main (){
	enter();
	int sno,i,flag=0;
	char ch;
	do{

	cout<<"Enter student rollno. to get info";
	cin>>sno;
		
	for(i=0;i<3;i++)
	 {
		if(stud_data[i].rollno==sno)
		{
			flag=1;
			display(i);
			break;
		}
	}

	if(flag!=1)
	cout<<endl<<"No student found"; 

	cout<<endl<<"Continue ?(y/n)";
	cin>>ch;
	 
	}while(ch=='y');
	return 0;

}

void enter(void) {
	for(int i=0;i<3;i++)
	{

	cout<<"Enter student roll no. ";
	cin>>stud_data[i].rollno;
	cout<<"Enter student name ";
	gets(stud_data[i].name);
	cout<<"Enter student class ";
	cin>>stud_data[i].cl;

	}
	return ; 
}

void display(int a){
	cout<<"Student data for roll no. "<<stud_data[a].rollno<<endl;
	cout<<"Student name ";
	cout.write(stud_data[a].name,30);
	cout<<endl;
	cout<<"Class: "<<stud_data[a].cl;
	return ;
}
