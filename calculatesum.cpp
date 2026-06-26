#include<iostream>
using namespace std;
int sumn(int n){
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    cout<<sum;
}
int main(){
    sumn(4363);
}