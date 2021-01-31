//Ex 5 Program 1
//Programmed by AUMRUDH LAL KUMAR TJ
//Program to do stack
#include<iostream>
using namespace std;
class stack
{
  private:
  			  int capacity;
			    int *s;
   			  int top;
   public:
         	stack(int &size)
   				{
   				 top=0;
					 s=new int[size];
           capacity=size;
          }
          void push(int);
          int pop();
};
void stack::push(int x)
{
   int ns;
   if(top==capacity)
   {
 		cout<<"Stackoverflow!\n";
    cout<<"Enter new size\n";
    cin>>ns;
    s=new int[ns];
    capacity=ns;
    top=0;
   }
   else
   {
     s[top]=x;
     top++;
   }
}
int stack::pop()
{
   if(top==0)
    {
 		 cout<<"Stack Underflow\n";
     cout<<"No element\n";
     int n;
     cout<<"Enter number to push\n";
     cin>>n;
     push(n);      
    }
   else
    {
     top--;
     return s[top];
    }
}
main()
{
     int m,choice;
     cout<<"Enter size\n";
     cin>>m;
     stack s(m);
     while(true)
     {
      cout<<"1-Push\n2-Pop\n3.Exit\nEnter your choice\n";
      cin>>choice;
      switch(choice)
       {
        case 1:
               int x;
               cout<<"Enter push element\n";
   						 cin>>x;
          		 s.push(x);
 							 break;
        case 2:
               int a;
           		 a=s.pop();
               if(a!='\0')
               {
               cout<<"The pop element is "<<a<<"\n";
               }
               break;
       case 3:
              exit(1);
       default:    
     				   exit(1);
      }
    }
}
