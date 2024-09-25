#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,3,6,9};
    int n=5;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}