#include<iostream>
using namespace std;



class TwoStack{
   int *arr;
   int top1;
   int top2;
   int size;

   public:
   TwoStack(int s){
      this->size=s;
      top1=-1;
      top2=s;
      arr=new int[s];
   }

   void push1(int element){
    if(top2-top1>1){
       top1++;
       arr[top1]=element; 
    }
    else{
       cout<<"Stack Overflow"<<endl;
    }
   }

   void push2(int element){
    if(top2-top1>1){
       top2--;
       arr[top2]=element; 

    }
   }

   int pop1(){
    if(top1>=0){
        int ans = arr[top1];
        top1--;
        return ans;
    }

   }

}