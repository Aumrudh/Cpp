//Ex 8 Program 3
//Programmed by AUMRUDH LAL KUMAR TJ
//Program to sort based on dept and roll no
#include<iostream>
#include<string>
using namespace std;
//template<typename type>
//void sort(type a[],int size);
class student
{
  public:
				   int rno;
					 string name;
		       string dept;
  public:
           friend void sort(student ,int );
           void print()
           {
		         cout<<rno<<"\t"<<name<<"\t"<<" "<<dept<<"\n";
           }
					 void readdetails()
           {
            cout<<"Enter roll no\n";
            cin>>rno;
					  cout<<"Enter name\n";
            cin>>name;
						cout<<"Enter Department\n";
            cin>>dept;
           }
           bool operator<(student &s)
           {
             return (dept<s.dept);
           }
           
};
template<typename type>
void sort(type ts[],int size)
{
    type temp;
    for(int i=0;i<size-1;i++)
    {
     for(int j=i+1;j<size;j++)
      {
        if(ts[i]<ts[j])
         {
          temp=ts[i];
          ts[i]=ts[j];
          ts[j]=temp;
         }
     }
   }
}
template<>
void sort(student ts[],int size)
{
	  student temp;
    for(int i=0;i<size-1;i++)
	  {
     for(int j=i+1;j<size;j++)
			{
				if(ts[i].dept<ts[j].dept)
				 {
					temp=ts[i];
 				  ts[i]=ts[j];
				  ts[j]=temp;
         }
        else
         {
           if(ts[i].dept==ts[j].dept)
             {
               if(ts[i].rno<ts[j].rno)
								 {
									temp=ts[i];
									ts[i]=ts[j];
									ts[j]=temp;
								 }
						 }
				  }
      }
		 }
}
main()
{
   student s[10];
   int i,n;
	 cout<<"Enter the no of student\n";
   cin>>n;
   for(i=0;i<n;i++)
   {
    s[i].readdetails();
   }
   cout<<"RollNo\tName \t Department\n";
   sort(s,n);
   for(i=0;i<n;i++)
   {
     s[i].print();
   }
}   
