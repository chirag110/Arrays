#include<iostream>
using namespace std;
int main(){
    int n,key;
    //cout<<"Enter Array size:";
    cin>>n;
    //cout<<"Enter Key to be searched:";
    cin>>key;
    int a[n];
    //cout<<"Enter the array elements:";
    int i;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        if(a[i]==key){
            cout<<key<<"  found at index  "<<i<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Key not Present"<<endl;
    }
    return 0;
}