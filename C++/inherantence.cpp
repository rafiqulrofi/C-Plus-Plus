#include<iostream>
#include<conio.h>

using namespace std;

class B1{
      
      int a;
      
public:
       B1(int x)
       {
              a=x;
       }
       
       int geta()
       {
           return a;
       }
       
       };
       
class D1 : public B1{
      
      int b;
      
      public:
             D1(int x,int y):B1(y)
             {
                    b=x;
             
             }
             int getb()
             {
                 return b;
                 }      
             };
class D2: public D1{
      
      int c;
      
      public:
             D2(int x,int y,int z):D1(y,z)
             {
                    c=x;
             }
             
      void show(){
           
           cout<<geta()<<getb();
           cout<<c;
           }
           };
           
           
int main()
{
    D2 ob(1,2,3);
    ob.show();
    
    getch();
    return 0;
 }
                  
