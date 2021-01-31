//Ex 7 Program 2
//Programmed by AUMRUDH LAL KUMAR TJ
//Program to convert 12hr to 24hr and vice versa
#include<iostream>
#include<string>
using namespace std;
class time12;
class time24
{
    private:
					  int hour;
						int minutes;
						int seconds;
    public:
  				 time24(int th=0,int tm=0,int ts=0)
 					  {
						  hour=th;
						  minutes=tm;
							seconds=ts;
    				}
					 int getHour()
   					{
							return hour;
						}
					 int getMinutes()
						{
							return minutes;
						}
					 int getSeconds()
						{
							return seconds;
						}
					 void show()
						{
						 	cout<<hour<<":"<<minutes<<":"<<seconds<<"\n";
						}
};
class time12
{
	  private:
					  int hr;
						int min;
						int sec;
						string ses;
		 public:
						time12(int thr=0,int tmin=0,int tsec=0,string ts="")
						{
							hr=thr;
							min=tmin;
							sec=tsec;
							ses=ts;
						}
						time12(time24 time)
						{
						 int thour,tminutes,tseconds;
						 string tsession;
						 thour=time.getHour();
						 tminutes=time.getMinutes();
						 tseconds=time.getSeconds();
             if(thour>12)
					   {
              thour%=12;
 						  tsession="PM";
							hr=thour;
							min=tminutes;
						  sec=tseconds;
							ses=tsession;              
  	         }
						 else
						 {
							tsession="AM";
					  	hr=thour;
              min=tminutes;
              sec=tseconds;
							ses=tsession;
						 }
						}
						operator time24()
							{
								int hrs,mins,secs;
								if(sec="pm"||"PM")
                {
                hrs=hr+12;
								mins=min;
								secs=sec;
                return time24(hrs,mins,secs);
			   			  }
                else
                {
								hrs=hr;
                mins=min;
                secs=sec;
                return time24(hrs,mins,secs);
            		}	
							}
						void display()
						{
							cout<<hr<<":"<<min<<":"<<sec<<" "<<ses<<"\n";
						}
};
main()
{
     time24 ta24(16,43,30);
		 time12 ta12;
		 ta12=ta24; //conversion constructor called
		 cout<<"Given 24 Hour Format\n";
		 ta24.show();
     cout<<"Output 12 Hour Format\n";
		 ta12.display();					
     time12 tb12(7,34,34,"PM");
		 time24 tb24;
		 tb24=tb12; //operator conversion called
		 cout<<"Given 12 Hour Format\n";
		 tb12.display();
		 cout<<"Output 24 Hour Format\n";
     tb24.show();
}
