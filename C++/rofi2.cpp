#include<iostream>
#include<conio.h>


using namespace std;

class person
{       
      private:
              
        int day;
        int month;
        int year;
        
      public:
         
         char name[25];
         
         bool isEligible(int d,int m,int y)
         {
              //calculate age
              
              //if 18+ then return true
              
              return true;
              
              //else return flase
                 
         }
      
      
      };



int main()
{
    person test;
    
    if(test.isEligible(1,1,2016))
    {
        cout<<"wow!!"<<endl;
    }
    getch();
    return 0;
    }
