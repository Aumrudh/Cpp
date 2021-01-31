//Excercise 1 Program 1
//Programed by AUMRUDH LAL KUMAR TJ
//Program to calculate marks of students
#include<iostream>
#include<string>
using namespace std;
class student
{
  private:
          int rno;
          string name;
          int mark[6];
          int total;
          float avg;
  public:
         void readmarks();
         void calculatemarks();
         void printmarks();
};
void student::readmarks()
{
  cout<<"Enter Roll NO\n";
  cin>>rno;
  cout<<"Enter Name\n";
  cin>>name;
  cout<<"Enter The marks\n";
  for(int i=0;i<6;i++)
  {
   cin>>mark[i];
  }
}
void student::calculatemarks()
{
  total=0;
  for(int i=0;i<6;i++)
  total=total+mark[i];
  avg=total/6;
}
void student::printmarks()
{
   cout<<"Roll No:\t"<<rno;
   cout<<"\nName:\t"<<name;
   cout<<"\nMarks\n";
   for(int i=0;i<6;i++)
   {
    cout<<mark[i]<<"\n";
   }
   cout<<"Total:\t"<<total;
   cout<<"\nAverage:  "<<avg;
   cout<<"\n";
}
main()
{
   student s[10];
   int n,i;
   cout<<"Enter No. Of students\n";
   cin>>n;
   for(i=0;i<n;i++)
    {
     s[i].readmarks();
     s[i].calculatemarks();
     s[i].printmarks();
    }
}
