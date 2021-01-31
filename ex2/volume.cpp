//Excercise 2 Program 1
//Programed by AUMRUDH LAL KUMAR TJ
//Program to calculate volume of objects
#include<iostream>
using namespace std;
float volume(int,int);     //cylinder volume
float volume(float);       //sphere
int volume(int);           //cube
int volume(int,int,int);   //cuboid
main()
{
     int r,h,a,l,b,h1;
     float rad;
     cout<<"Enter the radius and height of cylinder\n"; 
     cin>>r>>h;
     cout<<"Enter the sphere radius\n";
     cin>>rad;
     cout<<"Enter the cube side\n";
     cin>>a;
     cout<<"Enter the length , height ,breadth of cuboid\n";
     cin>>l>>b>>h1;
     cout<<"Volume of cylinder:\t"<<volume(r,h);
     cout<<"\n";
     cout<<"Volume of sphere:\t"<<volume(rad);
     cout<<"\n";
     cout<<"Volume of cube:\t\t"<<volume(a);
     cout<<"\n";
     cout<<"Volume of cuboid:\t"<<volume(l,b,h1);
     cout<<"\n";
}
float volume(int r,int h)  //cylinder volume
{
    return (3.14*r*r*h);
}
float volume(float rad)  //sphere volume
{
    return ((4*3.14*rad*rad*rad)/3);
}
int volume(int a)  //cube volume
{
    return (a*a*a);
}
int volume(int l,int b,int h1)  //cylinder volume
{
    return (l*b*h1);
}


