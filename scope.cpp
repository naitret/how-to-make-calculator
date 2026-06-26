#include<iostream>
using namespace std;
void update(int arr[],int n){
    arr[0]=120;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
    cout<<"going back to main function"
}
int main(){
   int arr[4]={1,4,3,6};
   update(arr,3);
   for(int i=0;i<3;i++ ){
    cout<<arr[i]<<" ";

   }
   cout<<endl;
   return 0;

}