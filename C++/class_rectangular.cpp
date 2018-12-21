#include<iostream>
#include<conio.h>

	using namespace std;

	class rectangular{
		
		public:
			
			int area(int r);
			float area(float r);
	};
	
	int rectangular::area(int r)
	{
		cout<<"int value:";
		
		return (r*5);
	}
	
	float rectangular::area(float r)
	{
		cout<<"\nfloat area:";
		
		return (r*5);
	}
	
	int main()
	{
		rectangular c1;
		rectangular c2;
		cout<<c1.area(5);
		cout<<c2.area(float(5.5));
		
	getch();
	}
