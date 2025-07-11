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

};
int main() {
    // Your code here
    cout << "Hello, Stack!" << endl;
    return 0;
}