//Excersie 3 Pgm 2
//Programmed By AUMRUDH LAL KUMAR TJ
//PRogram to print age>20
#include<iostream>
#include<string>
using namespace std;
class student
{
   private:
           int rno;
           string name;
           string dep;
           int age;
   public:
          void readdetails();
          void print();
   friend void findage(student[],int);
};
void findage(student s[],int n)
{
   for(int i=0;i<n;i++)
   {
   if(s[i].age>20)
     {
       s[i].print();
     }
   }     
} 
void student::readdetails()
{
    cout<<"Enter student Roll no\n";
    cin>>rno;
    cout<<"Enter name of student\n";
    cin>>name;
    cout<<"Enter department\n";
    cin>>dep;
    cout<<"Enter age\n";
    cin>>age;
}
void student::print()
{
   cout<<"The Roll No "<<rno<<" belonging to "<<dep<<" department ";
   cout<<" whose name is "<<name<<" is above 20 years and his age is ";
   cout<<age<<"\n";
}
main()
{
    student stud[50];
    int strength;
    cout<<"Enter no of students\n";
    cin>>strength;
    for(int i=0;i<strength;i++)
     {
       stud[i].readdetails();
     }
    findage(stud,strength);
}
