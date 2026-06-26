#include <bits/stdc++.h>
using namespace std;



int main(){
    int sum=0;
    int arr[5];
    int n=5;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        
    }
    cout<<sum;
}

