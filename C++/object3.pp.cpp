#include<iostream>
#include<conio.h>

using namespace std;

class item
{
	int num;
	float cost;
	
	public:
		
		void getdata(int a,float b);
		void putdata(void)
		{
			cout<<"\nNumber:"<<num<<"\n";
			cout<<"cost:"<<cost<<"\n";
		}
};

void item::getdata(int a,float b)
{
	num=a;
	cost=b;
}

int main()
{
	item x;
	cout<<"object x"<<"\n";
	
	x.getdata(300,299.99);
	x.putdata();
	
	
	cout<<"\n\nobject y"<<"\n";
	x.getdata(500,499.99);
	x.putdata();
	
	return 0;
}
