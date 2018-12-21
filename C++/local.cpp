#include<iostream>

int x;     //global variable x//

void changex(void)    
{
	x=20;    //value of global x assigned here//
}

void main(void)
{
	int x;    //local variable x//
	x=10;     //value of local x assigned here//
	changx();     //calling changeX//
	cout<<"Value of x is::"<<x;   //printf of the value local x//
}

