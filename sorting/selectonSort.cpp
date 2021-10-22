//find the minimum element in the unsorted array and 
//swap it with element at begning
//10,20,5,6,90,35
//1st step after sorting
//5,10,20,6,90,35

//2 loops requaired
//i=1 to 2nd last
//j=1+1 to last
//swap
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

        //2loops
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[i]){
                    int temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;

                }
            }

        }
    for(int i=0;i<n;i++)
    {
       
        cout<<arr[i]<<" ";
         

     }

return 0;


}


 
