//Excersie 8 Program 1
//Programmed by AUMRUDH LAL KUMAR TJ
//Program to do stack data
#include<iostream>
#include<string>
using namespace std;
class file
{
   private:
            int fno;
            int fsize;
            string fname;
   public:
           file(int tfno=0,string tfname="",int tfs=0)
            {
              fno=tfno;
              fname=tfname;
              fsize=tfs;
            }
            friend ostream &operator<<(ostream&,file&);
};
ostream &operator<<(ostream &tout,file&tfile)
{
    tout<<tfile.fno<<"\t\t";
    tout<<tfile.fname<<"\t";
    tout<<tfile.fsize<<"\n";
    return tout;
}
template<typename type>
class stack
{
   private:
            int top;
            type a[10];
   public:
           stack()
           {
             top=0;
           }
           void push(type);
           type pop();
};
template<typename type>
void stack<type>::push(type value)
{
   if(top==10)
    {
      cout<<"Stack overflow\n";
    }
   else
    {
       a[top]=value;
       top++;
    }
}
template<typename type>
type stack<type>::pop()
{
   if(top==0)
    {
      cout<<"Stack underflow\n";
    }
   else
    {
       top--;
       return a[top];
    }
} 
main()
{
   file t;
   stack<file>fs;
   file f[3]={file(3,"information.txt",857),
              file(25,"semester1.txt",1024),
              file(50,"important.txt",100)
             };
   cout<<"Recently Accesed file\n";
   for(int i=0;i<3;i++)
    {
       fs.push(f[i]);
    }
   cout<<"FileNumber\tFile name\tFile size\n";
   for(int i=0;i<3;i++)
    {
      t=fs.pop();
      cout<<t;
    }
}
 
