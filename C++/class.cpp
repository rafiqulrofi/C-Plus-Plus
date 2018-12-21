#include<iostream>
#include<conio.h>


using namespace std;

  class circle{
        public:
        int radious;
        float radioud2;
        float area(float r);
        int area (int r);
        
        };
        
  
       
        int circle::area(int r)
        { cout<<"int area";
          return (3*r*r); 
          
        }
        
        float circle::area(float r)
        {     
              cout<<"float area";
              return (3.1416*r*r);
            } 
        int main()
        {
        
        circle c1;
        circle c2;
        cout<<c1.area(5);
        cout<<c2.area((float)5.5);
        
        getch();
        }    
