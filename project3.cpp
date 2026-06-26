//to count 1 bit using in decimal number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        int digit=n&1;
        if(digit==1){
            count++;
        }
        n=n>>1;
        
    }
    cout<<count;
}