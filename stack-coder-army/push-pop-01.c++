#include<iostream>
using namespace std;

class stack{
    int *arr;
    int size;
    int top;
    public:

    bool flag;
    stack(int s){
        size=s;
        top=-1;
        arr=new int[s];
        flag=1;
    }
    void push(int value){
        if(top==size-1){
            cout<<"stack overflow\n";
            return;
        }else{
            top++;
            arr[top]=value;
            cout<<"Pushed "<<value<<" into the stack\n";
            flag=0;

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
            if(top==-1){
                flag=1;
            }

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
//    s.push(5);
//    s.push(6);
//    s.push(7);
//     cout<<s.peek()<<endl;
//    s.pop();
//    cout<<s.peek()<<endl;
//    cout<<s.IsEmpty()<<endl;
//    cout<<s.IsSize()<<endl;

    int value=s.peek();
    if(s.flag==0){
        cout<<value<<endl;
    }
}