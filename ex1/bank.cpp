//Excercise 2 Program 4
//Bank Program
#include<iostream>
#include<string>
using namespace std;
class bank
{
 private: 
         int acno;   
   			 string name;
		     float balance;
			   float deposit;
 public:
        void read();
        void withdraw();
        void deposite();
};
void bank::read()
{
   cout<<"Enter account no\n";
   cin>>acno;
   cout<<"Enter name of account holder\n";
   cin>>name;
   cout<<"Enter the opening balance\n";
   cin>>bal;
}
void bank::withdraw()
{
   cout<<"Enter the withdrawal amount\n";
   cin>>withdraw;
   balance-=withdraw;
   cout<<"The account no"<<acno<<"is debited with Rs"<<withdraw<<"and the new balance is"<<balance;
   cout<<"\n";
}
void bank::deposite()
{
   cout<<"Enter the deposite amount\n";
   cin>>deposite;
   balance+=deposite;
   cout<<"The account no"<<acno<<"is credited with Rs"<<deposite<<"and the new balance is"<<balance;
   cout<<"\n";
}
main()
{
    bank *b;
    b=new bank;
    int choice;
    b->read();
    cout<<"1.Deposite\n2.Withdraw\n";
    cout<<"Enter your choice\n";
    cin>>c;
    if(choice==1)
    {
      b->withdraw();
    }
~           
