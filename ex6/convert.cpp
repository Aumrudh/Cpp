#include<iostream>
using namespace std;
class feet;
class metre
{
  private:
          float x;
  public:
         metre(float a=0.0)
          {
            x=a;
          }
         void display()
          {
            cout<<"The entered metre value "<<x<<"\n";
          }
         friend void operator +(metre,feet);
};
class feet
{
  private:
          float y;
  public:
          feet(float b=0.0)
           {
             y=b;
           }
          void print()
          {
           cout<<"The Entered feet value is  "<<y<<"\n";
          }
        friend void operator +(metre,feet);
};
void operator +(metre tm,feet tf)
{
   float temp;
   temp=tm.x+(tf.y/3.33);
   cout<<"The Resultant value is "<<temp<<"\n";
}
main()
{
   float tm1,tf1;
   cout<<"Enter the metre value\n";
   cin>>tm1;
   metre m(tm1);
   cout<<"Enter feet value\n";
   cin>>tf1;
   feet f(tf1);
   m.display();
   f.print();
   m+f;
}
