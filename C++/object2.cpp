#include<iostream>
#include<conio.h>

using namespace std;


class classA
{
	public:
		int a,b;
		
		void add_ab(void)
		{
			cout<<"a+b="<<a+b;
		}
};

classA a1;

void f1(void)
{
	cout<<"\nIn f1():{a=5,b=10}\t";
	
	a1.a=15;
	a1.b=20;
	
	a1.add_ab();
}

int main()
{
	
	cout<<"int main:{a=15,b=20}\t";
	
	a1.a=15;
	a1.b=20;
	a1.add_ab();
	f1();
	
	
}
