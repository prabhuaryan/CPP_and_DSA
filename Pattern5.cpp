#include<iostream>
using namespace std;

int main(){
    int n=5;
    cout<<"Enter the number of rows : "<<endl;
    // cin>>n;

    int i=1;
    while(i<=n){
    
        int j=1;
         while(j<=i){
            cout<<"*";
            j++;
        }
         int sp=1;
        
        while(sp<=n-i){
            cout<<" ";
            sp++;
        }
         int k=1;
         while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}