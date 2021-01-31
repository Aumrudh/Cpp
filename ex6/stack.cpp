#include<iostream>
using namespace std;
class stack
{
 private:
         int a[10];
         int top;
 public:
        bool empty()
        {
          return(top==0);
        }
        bool full()
        {
          return(top==10);
        }
        stack()
        {
         top=0;
        }
        int operator-()
        {
          if(empty())
           {
             cout<<"Stack Underflow\n";
           }
          else
           {
            top--;
            return a[top];
           }
        }
        void operator+(int e)
        {
         if(full())
          {
            cout<<"Stack overflow\n";
          }
         else
          {
           a[top]=e;
           top++;
          }
        }
};
main()
{
   stack s;
   int choice,element,e;
   while(true)
   {
   cout<<"Enter your choice\n";
   cout<<"1-Push\n2-Pop\n3-Exit\n";
   cin>>choice;
   switch(choice)
   {
    case 1:
            cout<<"Enter the element to be inserted\n";
				    cin>>element;
 						s+element;
  			    break;
    case 2:
           e=-s;
           if(e!=0)
           {
            cout<<"The poped element is "<<e<<"\n";
           }
           else
           {
            cout<<"No element\n";
           }
       		  break;
    case 3:
           exit(0);
   }
   }
}
