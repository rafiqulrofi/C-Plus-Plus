#include<iostrem>
#include<conio.h>

using namespace std;

class base{
      
      public:
             int i;
           };
           
class derived1: virtual public base{
      
      public:
             int j;
             
             };
class derived2:virtual public base{
      
      public:
             int k;
             };
class derived3: public derived1,public derived2{
      
      public:
             int sum()
             {
                return i+j+k;
              }
                 };
                 
                 
int main()
      {  
      derived3 ob; 
      
      ob.i=10;
      ob.j=20;
      ob.k=30;
      cout<<ob.sum();
      
      getch();
      return 0;
      }
