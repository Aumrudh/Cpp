//Ex 3 Pgm1
//Programed by AUMRUDH LAL KUMAR TJ
//Pgm to calculate no of cars
#include<iostream>
#include<string>
using namespace std;
class car
{
    public:
             int vehicleno;
             string cpname;
             string mdname;
             int yom;
             static int bmw;
             static int toyato;
             static int hyundai;
             static int honda;
             static int other;
             void readdetails();
             void printdetails();
};
void car::readdetails()
{
     cout<<"Enter vehicle number\n";
     cin>>vehicleno;
     cout<<"Enter vehicle name\n";
     cin>>cpname;
     cout<<"Enter model name\n";
     cin>>mdname;
     cout<<"Enter date of manufacture\n";
     cin>>yom;
     if(cpname=="bmw")
     {
       bmw++;
     }
     else if(cpname=="toyato")
     {
       toyato++;
     }
     else if(cpname=="hyundai")
     {
      hyundai++;
     }
     else if(cpname=="honda")
  {
      honda++;
     }
     else
     {
      other++;
     }
}
void car::printdetails()
{
    cout<<"Vehicle no: "<<vehicleno<<"\n";
    cout<<"Vehicle name: "<<cpname<<"\n";
    cout<<"Model Name: "<<mdname<<"\n";
    cout<<"Manfacture year: "<<yom<<"\n";
}
int car::bmw;
int car::toyato;
int car::hyundai;
int car::honda;
int car::other;
main()
{
    car c[50];
    int i,n;
    cout<<"Enter the no of cars\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
     c[i].readdetails();
    }
   for(i=0;i<n;i++)
    {
    c[i].printdetails();
    }
   cout<<"The total no of cars in bmw: "<<car::bmw<<"\n";
   cout<<"The total no of cars in toyota: "<<car::toyato<<"\n";
   cout<<"The total no of cars in hyndai: "<<car::hyundai<<"\n";
   cout<<"The total no of cars in honda: "<<car::honda<<"\n";
   cout<<"The total no of other cars: "<<car::other<<"\n";
}
