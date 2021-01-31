//Exercise 1 Program 3
//Programed by AUMRUDH LAL KUMAR TJ
//Program to calculate bill
#include<iostream>
#include<string>
using namespace std;
class store
{
   private: 
  				 int ino;
  				 string name;
				   int quantity;
   public:
           float amount,price;
           void readdata();
           void calculate();
           void print();
};
void store::readdata()
{
   cout<<"Enter the item no.\n";
   cin>>ino;
   cout<<"Enter Name\n";
   cin>>name;
   cout<<"Enter Quantity\n";
   cin>>quantity;
   cout<<"Enter price\n";
   cin>>price;
}
void store::calculate()
{
   amount=price*quantity;
 //  cout<<amount;
}
void store::print()
{
   cout<<"\nItem NO:\t"<<ino;
   cout<<"\nName:\t"<<name;
   cout<<"\nQuantity:\t"<<quantity;
   cout<<"\nPrice:\t"<<price;
   cout<<"\nAmount:\t"<<amount;
}
main()
{
   store bill[100];
   int i,n;
   float total=0.0;
   cout<<"Enter no of items\n";
   cin>>n;
   for(i=0;i<n;i++)
    {
     bill[i].readdata();
     }
   for(i=0;i<n;i++)
    {
      bill[i].calculate();
      total+=bill[i].amount;
      bill[i].print();
    }
   cout<<"\nTotal:\t"<<total;
   cout<<"\n";
}
 
