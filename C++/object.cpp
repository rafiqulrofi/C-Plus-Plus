#include<iostream>
#include<conio.h>

using namespace std;

class classA
{
    private:
    	
    	int a,b;
	
	public:
		
		classA(int x, int y) 
		{
			a=x,b=y;
		}
		
		void add_AB()
		{
			cout<<"a+b="<<a+b;
		}
		
		
		
};

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	classA a1(x,y);
	
	a1.add_AB();
}
