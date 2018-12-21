#include<iostream>
#include<conio.h>

using namespace std;

class set
{
	int m,n;
	
	public:
		void input(void);
		void display(void);
		int largest(void);
};


int set :: largest(void)
{
	
	
	if(m>n)
	
	return(m);
	
	else
	return(n);
}

void set::input(void)
{
	cin>>m>>n;
}

void set:: display(void)
{
	cout<<"largest valu =" <<largest()<<"\n";
}

int main()
{
	set x;
	x.input();
	
	x.display();
	
	return 0;
}
