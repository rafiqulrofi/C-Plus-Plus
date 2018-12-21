#include<iostream>
#include<conio.h>

	using namespace std;

	class triangle{
		
		public:
			
			int area(int r);
			float area(float r);
	};
	
	int triangle::area(int r)
	{
		cout<<"int area:";
		
		return (r*r*.5);
	}
	
	float triangle::area(float r)
	{
		cout<<"\nfloat area:";
		
		return (r*r*.5);
	}
	
	int main()
	{
		triangle c1;
		triangle c2;
		cout<<c1.area(5);
		cout<<c2.area(float(5.5));
		
	getch();
	}
