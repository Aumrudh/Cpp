//Excersie 5 Program 2
//Programmed by AUMRUDH LAL KUMAR TJ
//Program to calculate bill amount
#include<iostream>
#include<string>
using namespace std;
class Item
{
   public:
  			   int ino;
    			 string iname;
					 int price;
				   int quantity;
           Item()
         		{
 						 ino=0;
					   iname="";
 					   price=0;
						 quantity=0;
            }
           Item(int tn,string tin,int tp)
            {
              ino=tn;
              iname=tin;
				      price=tp;
            }
          
           void printdetails()
           {
             cout<<"Item no: "<<ino<<"\n";
             cout<<"Item Name: "<<iname<<"\n";
             cout<<"Price: "<<price<<"\n";
             cout<<"Quantity"<<quantity<<"\n";
           }
};
class supplier
{
   private:     
				   int sno;
					 string sname;
 					 Item *it;
           int billamt;
   public:
           supplier()
            {
              sno=0;
              sname="";
              billamt=0;
              it=new Item[10];
            }
           supplier(string ts,int tsno,Item *ti)
           {
             sname=ts;
						 sno=tsno;
						 billamt=0;
						 it=new Item[tsno];
             for(int i=0;i<tsno;i++)
             {
               it[i]=ti[i];
             }
           }
           void showdetails()
           {
             cout<<"Name"<<sname<<"\n";
             cout<<"No. Of Item "<<sno<<"\n";
             for(int i=0;i<sno;i++)
             {
               it[i].printdetails();
             }
             cout<<"Bill Amount "<<billamt<<"\n";
           }
           void calculatebill()
  				 {
             cout<<"Supplier Name " <<sname<<"\n";
 					   for(int i=0;i<sno;i++)
              {
                cout<<"Enter Quantity for "<<it[i].iname<<"\n";
                cin>>it[i].quantity;
                billamt+=it[i].price*it[i].quantity;
              }
           }
           ~supplier()
           {
            delete []it;
           }
};
main()
{
    Item items[6]={Item(1,"Chocolates",10),Item(2,"Bag",5),Item(3,"Biscuits",20),Item(4,"Pen",15),Item(5,"Pencils",25),Item(6,"Notebooks",10)};
    supplier s1("Ram",5,items);
    s1.calculatebill();
    s1.showdetails();
    supplier s2("Sam",3,items+2);
    s2.calculatebill();
    s2.showdetails();
}            		 
