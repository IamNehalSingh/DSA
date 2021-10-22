 //in this we take first 2 element and compare if they are sorted then no problem if not then 
 //we will reapetedly swap two adjacent elements 
 //key points
 //1 )max no will be placed at end  in 1st iteration which will get sorted and 
 //then we will repat those process again and again for unsorted array

// for ith element we do n-1 iteration before we get our sorted array

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //for iteraton we will take counter
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;


}
