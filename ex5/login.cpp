//Excercie 5 Program 3
//Programmed By AUMRUDH LAL KUMAR TJ
//Program to count live number of students
#include<iostream>
#include<string>
using namespace std;
class live
{
   private:  
  			   string name;
  			   int ano;
    		   static int tano;
    public:
           live()
           {
             tano++;
             cout<<"You are Application number is : "<<tano<<"\n";
             cout<<"Welcome\n";
             cout<<"Total number of applicaton are :"<<tano<<"\n";
           }
           ~live()
           {
             tano--;
             cout<<"Logout Successful\n";
             cout<<"Total number of application are : "<<tano<<"\n";
           }
};
int live::tano;
main()
{
     live *a[100];
     int i=0;
     int ch;
     while(true)
      {
        cout<<"1.New Application \n2.Logout\n3.Exit\n";
        cout<<"Enter your choice\n";
        cin>>ch;
        if(ch==1)
         {
           if(i==100)
            {
              cout<<"Too many users\n";
              exit(1);
            }
           else 
            {
              a[i]=new live;
              i++;
            }
        }
       else if(ch==2)
         {
           if(i==0)
             {
               cout<<"No application\n";
               exit(1);
             }
           delete a[i-1];
           i--;
         }
      else
         {
          exit(0);
         }
}
}
         
            
