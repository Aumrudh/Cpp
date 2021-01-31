//Exercise 1 Program 2
//Programed by AUMRUDH LAL KUMAR TJ
//Program to calculate employee details
#include<iostream>
#include<string>
using namespace std;
class employee
{
  private:
           int eid;
           string name;
           float da;
           float hra;
           float deduct;
           float bpay;
           float gpay;
           float npay;
   public:
          void readdetails();
          void calculatepay();
          void printpay();
};
void employee::readdetails()
{
   cout<<"Enter Employee id\n";
   cin>>eid;
   cout<<"Enter Name\n";
   cin>>name;
   cout<<"Enter Basic Pay\n";
   cin>>bpay;
   cout<<"Enter Da Hra Deduct without percentage\n";
   cin>>da>>hra>>deduct;
}
void employee::calculatepay()
{
  gpay=npay=0.0;
  gpay=bpay+(da*bpay)+(hra*bpay);
  npay=gpay-(deduct*bpay);   
}
void employee::printpay()
{
   cout<<"Employee ID:\t"<<eid;
   cout<<"\nName:\t"<<name;
   cout<<"\nBasicPay:\t"<<bpay;
   cout<<"\nGrossPay:\t"<<gpay;
   cout<<"\nNetpay:  "<<npay<<"\n";
}
main()
{
   employee e[10];
   int n,i;
   cout<<"Enter No of employees\n";
   cin>>n;
   for(i=0;i<n;i++)
   {
    e[i].readdetails();
    e[i].calculatepay();
    e[i].printpay();
   }
}
