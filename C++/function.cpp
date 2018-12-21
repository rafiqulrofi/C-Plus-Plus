#include<iostream>
#include<conio.h>

using namespace std;

inline float mul(float x,float y)
{
	return(x*y);
}

inline double div(double p,double q)
{
	return(p/q);
}

int main()
{
	float a=500.40;
	float b=400.40;
	
	cout<<"Mul="<<mul(a,b)<<"\n";
	cout<<"Div="<<div(a,b)<<"\n";
	
	return 0;
}
