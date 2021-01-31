//Excersice 3 Program 3
//programed by AUMRUDH LAL KUMAR TJ
//Pgm to calculate tax
#include<iostream>
#include<string>
using namespace std;
class employee
{ 
  private:
          int eno;
          string name;
          int gpay;
  public:
          int annualic;
          float taxic;
          void read();
          void calc();
 					void print();
   friend void taxem(employee,int);
};
void taxem(employee e[],int n)
{
    for(int i=0;i<n;i++)
     {
      if(e[i].annualic>250000)
         {
           e[i].print();
         }
      }
}
void employee::read()
{
   cout<<"Enter employee no\n";
   cin>>eno;
   cout<<"Enter name\n";
   cin>>name;
   cout<<"Enter gross pay\n";
   cin>>gpay;
}
void employee::calc()
{
   annualic=12*gpay;
   if(annualic>250000)
   {
   taxic=annualic*0.1;
   }
   else
   {
     taxic=0;
   }
}
void employee::print()
{
   cout<<"Employee no: "<<eno;
   cout<<"\nName\t:"<<name;
   cout<<"\nGrosspay\t:"<<gpay;
   cout<<"\nAnnual income\t:"<<annualic<<"\n";
   cout<<"Tax Amount\t:"<<taxic<<"\n";
}
main()
{
   employee e[50];
   int i,m;
   cout<<"Enter number of employees\n";
   cin>>m;
   for(i=0;i<m;i++)
    {
      e[i].read();
    }
    for(i=0;i<m;i++)
    e[i].calc();
    taxem(e,m);
    
}
