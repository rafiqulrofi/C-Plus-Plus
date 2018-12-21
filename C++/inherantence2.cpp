#include<iostream>
#include<conio.h>

using namespace std;

class B1{
      
      
      public:
             B1(){cout<<"constucting B1\n";}
             ~B1(){cout<<"Destructing B1\n";}
             
             };
      class B2{
      
      public:      
            B2(){cout<<"consturting B2\n";}
            ~B2(){cout<<"Destructing B2\n";}
            };
            
      class D : public B1, public B2{
            
      public:      
            D(){cout<<"consturting D\n";}
            ~D(){cout<<"Desturcting D\n";}
            };
            
int main()
{
    D ob;
    
    getch();
    return 0;
}
