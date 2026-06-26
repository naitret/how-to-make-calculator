//calculator using switch function
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number a"<<endl;
    cin>>a;
    int b;
    cout<<"enter the number b"<<endl;
    cin>>b;
    char opperator;
    cout<<"enter the opperator"<<endl;
    cin>>opperator;
    switch(opperator){
        case'+':cout<<(a+b)<<endl;
        break;
        case'-':cout<<(a-b)<<endl;
        break;
        case'*':cout<<(a*b)<<endl;
        break;
        case'/':cout<<(a/b)<<endl;
        break;
        case'%':cout<<(a%b)<<endl;
        break;
        default:cout<<"your input is wrong"<<endl;
        break;
    }
    
}