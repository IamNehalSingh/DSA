//insertion sort
//in this we insert the element from unsorted
//array to its  correct position in sorted array
//means before element should be low and after elements should be high
// assumes the first elements to be true
//starts with the 2nd element
 
//

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
         while(arr[j]>current && j>=0){
             arr[j+1]=arr[i];
             j--;
         }
         arr[j+1]=current;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     return 0;

}