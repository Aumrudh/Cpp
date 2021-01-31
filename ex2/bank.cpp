//Excercise 2 Program 4
//Programed by AUMRUDH LAL KUMAR TJ
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
         float withdraw;
 public:
        void read();
        void draw();
        void dep();
};
void bank::read()
{
   cout<<"Enter account no\n";
   cin>>acno;
   cout<<"Enter name of account holder\n";
   cin>>name;
   cout<<"Enter the opening balance\n";
   cin>>balance;
}
void bank::draw()
{
   cout<<"Enter the withdrawal amount\n";
   cin>>withdraw;
   if(balance>withdraw)
   {
   balance-=withdraw;
   cout<<"The account no "<<acno<<" is debited with Rs "<<withdraw<<" and the new balance is "<<balance;
   cout<<"\n";
   }
   else
   {
    cout<<"Balace is not sufficent";
   }
}
void bank::dep()
{
   cout<<"Enter the deposite amount\n";
   cin>>deposit;
   balance+=deposit;
   cout<<"The account no "<<acno<<" is credited with Rs "<<deposit<<" and the new balance is "<<balance;
   cout<<"\n";
}
main()
{
    bank *b;
    b=new bank;
    int choice;
    b->read();
    cout<<"1.Deposit\n2.Withdraw\n";
    cout<<"Enter your choice\n";
    cin>>choice;
    if(choice==1)
    {
      b->dep();
    }
    else  if(choice==2)
    {
      b->draw();
    }
    else 
    {
     cout<<"Invalid Choice\n";
    }
}
