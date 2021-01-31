//Excersice 4 Program 3
//programed by AUMRUDH LAL KUMAR TJ
//Pgm to calculate tax(constructor)
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
          void tax();
  employee()
  {
    eno=0;
    name="";
    gpay=0;
    annualic=0;
    taxic=0;
  }
  employee(int eeno,string ename,int epay)
  {
    eno=eeno;
    name=ename;
    gpay=epay;
    annualic=0;
    taxic=0;
  }
};
void employee::calc()
{
   annualic=12*gpay;
   if(annualic>250000)
   {
   taxic=annualic*0.25;
   print();
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
   employee e;
   employee e1(1,"ram",50000);
   employee e2(2,"karthik",20000);
   e.calc();
   e1.calc();
   e2.calc();  
}
