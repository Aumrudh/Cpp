//Excersie 9 Program 2
//Programmed by AUMRUDH LAL KUMAR TJ
//Program to do queue operation
#include<iostream>
using namespace std;
template<typename type>
class queue
{
  private:
          int front;
          int rear;
          type q[10];
  public:
         queue()
         {
          front=0;
          rear=0;
         }
        void enqueue(type);
        type dequeue();
};
template<typename type>
void queue<type>::enqueue(type value)
{
    if(rear==10)
     {
       cout<<"Queue is full\n";
     }
    else
     {
       q[rear]=value;
       rear++;
     }
}
template<typename type>
type queue<type>::dequeue()
{
    type temp;
    if(front==rear)
     {
       cout<<"Queue is Empty\n";
     }
    else
     {
      temp=q[front];
      front++;
      return temp;
     }
}
main()
{
   int t1,t2;
   string s1,s2;
   queue<int>iq;
   iq.enqueue(10);
   iq.enqueue(20);
   t1=iq.dequeue();
   t2=iq.dequeue();
   queue<string>sq;
   sq.enqueue("Hacking");
   sq.enqueue("Debugging");
   s1=sq.dequeue();
   s2=sq.dequeue();
   cout<<"Aumrudh Infotech Ltd\n";
   cout<<"Place Number: "<<t1<<"\n";
   cout<<"Job Done: "<<s1<<"\n";
   cout<<"Place Number: "<<t2<<"\n";
   cout<<"Job Done: "<<s2<<"\n";
}
