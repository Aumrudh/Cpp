//Ex 9 Pgm 3
//Programmed by AUMRUDH LAL KUMAR TJ
//Program to do bank calc.
#include<iostream>
#include<string>
using namespace std;
class bank
{
    private:
        // int acctno;
         string name;
         float bal;
    public:
         int acctno;
         bank (int ta=0,string tn="",float tb=0.0):acctno(ta),name(tn),bal(tb)
         { }
         void print()
         {
            cout<<"The Account NO :"<<acctno<< " and the Account Holder name is :"<<name<<"\n The Opening Balance is :$ "<<bal;
         }
         bool operator ==(bank  &ob)
         {
          return (acctno == ob.acctno);
         }
         bool operator <(bank &ob)
         {
          return (acctno < ob.acctno);
         }
         friend ostream &operator <<(ostream &,bank &);
};
ostream &operator <<(ostream &tout,bank &tb)
{
         tout<<"Account NO     :"<<tb.acctno<<"\n";
         tout<<"Account Holder :"<<tb.name<<"\n";
         tout<<"Opening Balance:"<<tb.bal<<"\n";
    return tout;
}

  bank b1[3]={ bank(1234,"Venkat",12000),bank(2345,"vinif",13000),bank(3456,"Dinesh",14000) };

template <typename t1>
int search(t1 b[],t1 key)
{
for (int i=0;i<3;i++)
   {
   if (b[i]==key)
     return i;
   }
  return -1;
}
template <typename t2>
class stack
{
   private:
       int top;
       t2 sarr[10];
   public:
       stack()
       {
         top=0;
       }
   void push(t2);
   t2 pop();
};
template <typename t2>
void stack<t2>::push(t2 val)
{
  if (top >9)
    cout<<"The Stack overflow ! Can't insert\n";
  else
    sarr[top]=val;
    top++;
}
template <typename t2>
t2 stack<t2>::pop()
{
   if (top==0)
    cout<<" Stack underflow !Can't pop\n";
   else
   {
   top--;
   return sarr[top];
   }
}
template< >
class stack <bank>
{
  private:
     int top;
     int acctarr[10];
  public:
     stack()
     {
     top=0;
     }
  void push(bank);
  bank pop();
};
//template< >
void stack<bank>::push(bank temp)
{
   if (top >9)
    cout<<"Stack overflow !Can't insert\n";
   else
   {
   acctarr[top]=temp.acctno;
   top++;
   }
}
//template< >
bank stack<bank>::pop()
{
   if (top==0)
    cout<<"Stack underflow !Can't pop\n";
   else
   {
   top--;
  // int tempno;
   bank tempno;
   tempno=acctarr[top];
   int searching=search(b1,tempno);
   return b1[searching];
   }
}
main()
{
  //  bank b1[334,"Venkat",12000),bank(2345,"vinif",13000),bank(3456,"Dinesh",14000) };
    stack <int>si;
     si.push(1);
     si.push(2);
    cout<<si.pop()<<"\n"<<si.pop()<<"\n";
    stack<string>st;
     st.push("Venky");
     st.push("Vini");
    cout<<st.pop()<<"\n";
    cout<<st.pop()<<"\n";
    stack <bank> es;
    bank j;
     for (int i=0;i<3;i++)
        {
        es.push(b1[i]);
        }
     for (int i=0;i<3;i++)
        {
        j=es.pop();
        cout<<j<<"\n";
        }
}

