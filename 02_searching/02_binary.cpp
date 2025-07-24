#include <iostream>
using namespace std;

int main(){
    int arr[]={1,3,4,6,7,9,10,11,12};
    int target=11;
    int start,end, mid;
    int result=-1;
    start=0;
    end=8;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==target){
            result=mid;
            break;
        }else if (arr[mid]>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
        
    }
    if(result!=-1){
         cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }
}