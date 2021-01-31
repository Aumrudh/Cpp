//Ex 7 Program 3 
//Programmed by AUMRUDH LAL KUMAR TJ
//Program to convert object to int & string
#include<iostream>
#include<string>
using namespace std;
class Employee
{
   private:
           int eno;
           string ename;
           string dept;
    public:
           Employee(int te,string tn,string td)
           {
            eno=te;
            ename=tn;
            dept=td;
           }
						operator string()
            {
             return ename;
            }
           operator int()
            {
             return eno;
            }
         
};
main()
{
     Employee e(100,"Kumar","IT");
     string s=e;//operator string() invoked
     int no=e;//operator int() invoked
     cout<<"Employee Name: "<<s<<"\n";
     cout<<"Employee Id: "<<no<<"\n";
}
