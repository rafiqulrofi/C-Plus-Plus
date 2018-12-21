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
             
      class derived : public  base{
            
            int y;
            
       public:
                   
               void sety ( int x)
                   
               { y =x;}
                   
                void showy ()
                   
               { std::cout << y << '\n';}
               };
               
        int main(){
            derived ob;
            ob.setx(10);
            ob.showx();
            ob.sety(20);
            ob.showy();
            
            getch();
            return 0;
            }       
