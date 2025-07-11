#include<iostream>
using namespace std;

class stack{
    int *arr;
    int size;
    int top;
    public:
    stack(int s){
        size=s;
        top=-1;
        arr=new int[s];
    }
    void push(int value){
        if(top==size-1){
            cout<<"stack overflow\n";
            return;
        }else{
            top++;
            arr[top]=value;
            cout<<"Pushed "<<value<<" into the stack\n";

        }
    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow\n";
        }
        else{
            // cout<<"Popped "<<arr[top]<<" from the stack\n";
            top--;
            cout<<"Popped "<<arr[top+1]<<" from the stack\n";

        }
    }
    int peek(){
        if(top==-1){
            cout<<"stack is empty\n";
            return -1;
        }
        else{
            return arr[top];
        }
    }
    bool IsEmpty(){
        return top==-1;
    }
    int IsSize(){
        return top+1;
    }

};
int main() {
   stack s(s);
   s.push(5);
   s.push(6);
   s.push(7);
   
}