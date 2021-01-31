#include<iostream>
#include<string>
using namespace std;
class date
{
  public: 
 		     int day;
         int month;
 				 int year;
 public:
         date()
         {
           day=0;
           month=0;
 					 year=0;
    		 }
         date(int d,int m,int y)
         {
           day=d;
           month=m;
           year=y;
         }
};
date calculation(date d1,date d2)
{
   date d3;
   if(d1.day>d2.day)
    {
      d3.day=d1.day-d2.day;
    }
   else
    {
      d3.day=d2.day-d1.day;
    }
   if(d1.month>d2.month)
    {
      d3.month=d1.month-d2.month;
    }
   else
    {
      d3.month=d2.month-d1.month;
    }
   if(d1.year>d2.year)
    {
      d3.year=d1.year-d2.year;
    }
   else
    {
      d3.year=d2.year-d1.year;
    }
    return d3;
}
main()
{
    int a,b,c,d,e,f;
    cout<<"Enter first date dd-mm-yyyy\n";
    cin>>a>>b>>c;
    cout<<"Enter second date dd-mm-yyyy\n";
    cin>>d>>e>>f;
    date start(a,b,c);
    date end(d,e,f);
    date diff;
    diff=calculation(start,end);
    cout<<"Difference between two dates is\n";
    cout<<"Day :"<<diff.day;
    cout<<"\nMonth :"<<diff.month;
    cout<<"\nYear :"<<diff.year<<"\n";
}
