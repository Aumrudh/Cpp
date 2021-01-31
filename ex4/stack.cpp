//Ex 4 Pgm 2
//Programmed by AUMRUDH LAL KUMAR TJ
//Program to check stack is empty or full
#include<iostream>
using namespace std;
class stack
{
  private:
           int top;
           int a[10];
  public:
          stack()
          {
           top=0;
          }
          void push(int x);
          int pop();
          bool check();
          bool checkp();
};
void stack::push(int x)
{
    if(check())
     {
       cout<<"Stack Overflow! Can't Insert\n";
     }
    else
     {
       a[top]=x;
       top++;
     }
}
int stack::pop()
{
    if(checkp())
      {
        cout<<"Stack underflow! Cannot pop\n";
        return -1;
      }
    else
      {
        top--;
        return a[top];
      }
}
bool stack::check()
{
     return(top==10);
}
bool stack::checkp()
{
     return(top==0);
}
main()
{
     int n,m,choice;
     stack s1;
     while(1)
     {
      cout<<"Enter your choice\n";
      cout<<"1-Push\n2.Pop\n3.Exit\n";
      cin>>choice;
      switch(choice)
       {
         case 1:
                 cout<<"Enter push element\n";
           			 cin>>n;
                 s1.push(n);
                 break;
         case 2:
                m=s1.pop();
                if(m==-1)
                {
                  cout<<"No element\n";
                }
                else
                {
                cout<<"The pop element is "<<m<<"\n";
                }
                break;
         case 3:
                exit(0);
       }
     }
} 
