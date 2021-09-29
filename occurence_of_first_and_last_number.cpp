#include<iostream>
using namespace std;
int func(int arr[],int key,int i,int n){
    if(i==n){
        return -1;
    }
    else{
         if(arr[i]==key){
             return i;
         }
         func(arr,key,i+1,n);
        
    }}
   int func1(int arr[],int key,int i)
   {
    if(i==0){
        return -1;
    }
    else{
         if(arr[i]==key){       
             return i;
         }
         func1(arr,key,i-1);
    }

    }
int main(){
    int arr[7]={4,2,1,2,5,2,7};
    int key=2,i,n=7;
  cout<<func(arr,key,i=0,n)<<endl;
  cout<<func1(arr,key,i=n-1);
    return 0 ;
    
}