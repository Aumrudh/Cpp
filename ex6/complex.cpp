#include<iostream>
using namespace std;
class Complex
{
  private:
          float real;
          float imag;
  public:
         Complex(float tr=0,float ti=0)
         {
          real=tr;
          imag=ti;
         }
         Complex operator+(Complex c2)
  		   {
 			   	Complex temp;
					temp.real=real+c2.real;
				  temp.imag=imag+c2.imag;
 				  return temp;
         }
         Complex operator*(Complex c2)
         {
           Complex temp;
           temp.real=(real*c2.real)-(imag*c2.imag);
           temp.imag=(real*c2.imag)+(imag*c2.real);
       	   return temp;
				 }
         void operator()(float tx,float ty)
				 {
           real=tx;
					 imag=ty;
   			 }
         friend istream&operator>>(istream &,Complex &);
         friend ostream&operator<<(ostream &,Complex &);
};
istream&operator>>(istream &tin,Complex &c)
{
  cout<<"Enter Complex Number real and imaginary part\n";
  tin>>c.real>>c.imag;
  return tin;
}
ostream&operator<<(ostream &tout,Complex &c)
{
   tout<<"\nRealpart "<<c.real;
   tout<<"\nImaginary part "<<c.imag;
   tout<<"\nComplex number is "<<c.real<<"+"<<c.imag<<"i\n";
   return tout;
}
main()
{
   Complex c1,c2,c3,c4;
   c1(2,1);
   c2(5,8);
   c3=c1+c2;
   c4=c1*c2;
   cout<<c3;
   cout<<c4;
}

