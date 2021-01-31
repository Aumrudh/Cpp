//Excercise 2 Program 2
//Programed by AUMRUDH LAL KUMAR TJ
//Program to do binary search
#include<iostream>
using namespace std;
main()
{
     int *p;
     int n,i,key,low,high,mid;
     cout<<"Enter the no.of elements\n";
     cin>>n;
     p=new int[n];
     cout<<"Enter the elements in ascending order\n";
     for(i=0;i<n;i++)
     cin>>p[i];
     low=0;
     high=n-1;
     mid=(low+high)/2;
     cout<<"Enter the search element\n";
     cin>>key;
     while(low<=high)
     {
       if(p[mid]==key)
        {
          cout<<key<<"is found at position"<<mid+1<<"\n";
          break;
        }
       else if(p[mid]<key)
        {
         low=mid+1;
        }
       else 
        {
         high=mid-1;
        }
       mid = (low +high)/2; 
       if(low>high)
        {
          cout<<key<<"is not found\n";
          break;
        }
     }
}
      
      
