// count 1 bit by input a and b.
#include<iostream>
using namespace std;
int digitcount(int a,int b){
    int count=0;
    while(a>0){
       int digit=a&1;
        if(digit==1){
            count++;
        }
        a=a>>1;
    }
    
    while(b>0){
             int cloud=b&1;
            if(cloud==1){
                count++;
            }
            b=b>>1;
        }
        cout<<count;
}
int main(){
    
   digitcount(7,3);
}