#include<iostream>
#include<string>
using namespace std;
class dollor;
class rupees
{
   private:
           double r;
   public:
          rupees(double tr=0)
          {
           r=tr;
          }
          double getRupees()
          {
            return r;
          }
          void show()
          {
           cout<<"Rupees is "<<r<<"\n";
          }
};
class dollor
{
  double d;
  public:
        dollor(double td=0)
        {
         d=td;
        }
        dollor(rupees R)
        {
         double tr;
         tr=R.getRupees();
         d=tr/69.8;
        }
operator rupees()
        {
         double ttd;
         ttd=d*69.8;
         return rupees(ttd);
        }
void display()
        {
         cout<<"Dollor is "<<d<<"\n";
        }
};
main()
{
dollor do1(10);
rupees ru1(185);
rupees ru2;
dollor do2;
do2=ru1;
ru1.show();
do2.display();
ru2=do1;
do1.display();
ru2.show();
}
