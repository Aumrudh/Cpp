//Excercise 2 Program 3
//Programed by AUMRUDH LAL KUMAR TJ
//Program to calculate si
#include<iostream>
using namespace std;
void SI(int&,int&,float&);
main()
{
   int p,n;  
   float r;
   cout<<"Enter principle,no.of years,rate of intrest\n";
   cin>>p>>n>>r;
   SI(p,n,r);
}
void SI(int &p,int &n,float &r)
{
   float si;
   si=(p*n*r)/100;
   cout<<"The simple intrest is "<<si;
   cout<<"\n";
}
   
