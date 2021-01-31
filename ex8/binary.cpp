//Excercise 8 Program 2
//Programmed by AUMRUDH LAL KUMAR TJ
#include<iostream>
#include<string>
using namespace std;
class item
{
    private:
				    int ino;
	          string name;
     public:
            void readdetails()
            {
              cout<<"Enter the item no\n";
              cin>>ino;
              cout<<"Enter the item name\n";
              cin>>name;
            }
            void print()
            {
             cout<<ino<<"\t"<<name<<"\n";
            }
            bool operator==(item &IT)
            {
              return(ino==IT.ino);
            }
            bool operator>(item &IT)
            {
               return(ino>IT.ino);
            }

};
template<typename type>
int binarysearch(type  a[],type key,int size)
{
    int low=0,high=size-1,mid;
    while(low<=high)
     {
       mid=(low+high)/2;
       if(a[mid]==key)
       {
        return mid+1;
       }
       else if(a[mid]>key)
       {
          high=mid-1;
       }
       else
       {
          low=mid+1;
       }
    }
   return -1;  
}
main()
{
    item it[10],search;
    int n,i,position;
    cout<<"Enter the number of items\n";
    cin>>n;
    for(i=0;i<n;i++)
     {
       it[i].readdetails();
     }
    cout<<"Enter the search details\n";
    search.readdetails();
    position=binarysearch<item>(it,search,n);
    if(position!=-1)
    {
    cout<<"Element is present\n";
    cout<<"Item No\tItem Name\n";
    search.print();
    }
    else
    {
     cout<<"The Elements is not present";
    }
} 
       
