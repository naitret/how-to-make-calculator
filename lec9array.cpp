#include<iostream>
using namespace std;
int arrayname(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){
    //printing the array;
    int name[5]={1,5,8};
    int n=5;
    arrayname(name,5);
    
    //printing the array;
    int space[7]={0};
    int s=7;
    arrayname(space,7);
    
    //indexing the value;
    int shruti[9]={8,3,5,2,6,4,1,9,8};
    cout<<"value of 4th index is "<<shruti[6];
    //try initalizing all location with 1
    int akshaj[7]={1};
    int j=7;
    arrayname(akshaj,7);
    
    
}
