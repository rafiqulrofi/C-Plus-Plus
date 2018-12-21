#include<iostream>
using namespace std;

class A{
    public:
    int i;
    A(){
        cout<<"default constructor is calling"<<endl;
    }
    A(const A &a){
        cout<<"Copy constructor is calling"<<endl;
     
    }
    ~A(){
        cout<<"destructor is calling"<<endl;
    }
    
};
int main()
{
    A a;
    A b=a;
  
   
   
    
    return 0;
}
