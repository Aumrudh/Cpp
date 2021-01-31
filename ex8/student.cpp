#include<iostream>
#include<string>
using namespace std;
class student /*Class Student*/
{
   int rno;
   string name;
   int mark[6];
   int total;
  public:
       int rank;
       void readdetails()
       { 
         total=0;
         cout<<"Enter rollno:\n";
         cin>>rno;
         cout<<"Enter name:\n";
         cin>>name;
         cout<<"Enter mark of 6 subjects:\n";
         for(int i=0;i<6;i++)
         {
            cin>>mark[i];
            total+=mark[i];
         }
      }
       void printdetails()
       {
          cout<<rno<<"\t"<<name<<"\t"<<total<<"\t";
       }
      bool operator<(student &s)/* < operator*/
      {
         return(total<s.total);
      }
  };
template <typename type> /*Template function*/
void bubblesort(type a[],int m)
{
   type temp;
   for(int i=0;i<m;i++)
   {
     for(int j=i+1;j<m;j++)
     {
      if(a[i]<a[j])
      {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
      }
    }
   
  }
}

main()
{
   student s[20];
   int n,i;
   cout<<"Enter no of students:\n";
   cin>>n;
   for(int i=0;i<n;i++)
   {
     s[i].readdetails();
   } 
   bubblesort<student>(s,n);/*Template Call*/
   cout<<"RollNo\tName\tTotal\tRank\n";
   for(int j=0;j<n;j++)
   { 
     s[j].printdetails();
     cout<<j+1<<"\n";
   }
}

