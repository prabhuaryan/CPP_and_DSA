#include<iostream>
using namespace std;

int main(){
    int n=5;
    cout<<"Enter the number of rows : "<<endl;
    // cin>>n;

    int i=1;
    while(i<=n){
        int sp=1;
        
        while(sp<=n-i){
            cout<<" "<<" ";
            sp++;
        }
        int j=1;
         while(j<=i){
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}