#include<iostream>
#include<conio.h>



class base{
      int x;
      
      public:
             
             void setx ( int n)
             {
                  x=n;
             }
               
              void showx()
              { std::cout <<x<<'\n';}
              
             };
             
      class derived : private  base{
            
            int y;
            
       public:
                   
               void sety ( int x)
               {
                setx(10);       
                y =x;}
                   
                void showy ()
               {
                     showx();    
                     std::cout << y << '\n';}
               };
               
        int main(){
            derived ob;
            
            ob.sety(20);
            ob.showy();
            
            getch();
            return 0;
            }       
