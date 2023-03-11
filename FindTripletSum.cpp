// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

 bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr, arr+n);
        for(int i=0; i<=n-1; i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else {
                    return true;
                }
            }
        }
        return false;
    }
int main() {
    // Write C++ code here
    int arr[]={9,20,9,2,3,6,7,8,10};
    int size=sizeof(arr)/sizeof(int);
    
    // BubbleSort(arr, size);
    findTriplets(arr, size);
    

    return 0;
}