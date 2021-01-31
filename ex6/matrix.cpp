#include<iostream>
#include<string>
using namespace std;
class matrix
{
  private:
          int a[3][3];
  public:
     		 void show();
 			   matrix()
         {
           for(int i=0;i<3;i++)
            {
              for(int j=0;j<3;j++)
               {
                 a[i][j]=0;
               }
            }
          }
          matrix(int ta[][3])
          {
          for(int i=0;i<3;i++)
            {
              for(int j=0;j<3;j++)
               {
                 a[i][j]=ta[i][j];
               }
            }
          }
         matrix operator +(matrix tm)
				{	
   				 matrix r;
    			{
     				for(int i=0;i<3;i++)
       				{
        				for(int j=0;j<3;j++)
         				 {
          				 r.a[i][j]=a[i][j]+tm.a[i][j];
          			}
       				}
     			}
   				return r;
        }
				matrix operator *(matrix mt)
				{
    			matrix m;
    		{
     			for(int i=0;i<3;i++)
       	{
          for(int j=0;j<3;j++)
          	{
           		m.a[i][j]=0;
           		for(int k=0;k<3;k++)
            	{
            		m.a[i][j]+=a[i][j]*mt.a[k][j];
          	  }
          	}
      	 }
   				return m;
     			}
				}
};
void matrix::show()
{
   for(int i=0;i<3;i++)
            {
              for(int j=0;j<3;j++)
               {
                 cout<<a[i][j]<<"\t";
               }
              cout<<"\n";
            }
    
}
main()
{
     int i,j;
     int x[3][3],y[3][3];
     cout<<"Enter the matrix 1\n";
     {
           for(int i=0;i<3;i++)
            {
              for(int j=0;j<3;j++)
               {
                 cin>>x[i][j];
               }
            }
     }
    cout<<"Enter the matrix 2\n";
     {
           for(int i=0;i<3;i++)
            {
              for(int j=0;j<3;j++)
               {
                 cin>>y[i][j];
               }
            }
     }
    matrix m1(x),m2(y),m3,m4;
    cout<<"Entered matrix 1 is\n";
    m1.show();
    cout<<"Entered matrix 2 is\n";
    m2.show();
    m3=m1+m2;
    cout<<"\nAdded matrix is\n";
    m3.show();
    cout<<"\nMultiplied matrix is\n";
    m4=m1*m2;
    m4.show();
}
