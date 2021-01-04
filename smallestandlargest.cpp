#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=INT_MIN;
    int s=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>l){
            l=a[i];
        }
        if(a[i]<s){
            s=a[i];
        }
    }
    cout<<"Largest is :"<<l<<endl;
    cout<<"Smallest is :"<<s<<endl;
    return 0;
}