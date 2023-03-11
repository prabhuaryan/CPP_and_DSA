#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter Two Numbers : "<<endl;
    cin>>n1>>n2;
    //Using Third Variable:-
    /*int temp=n1;
    n1=n2;
    n2=temp;
    */
    
    //Using Swap in-built function
    /*swap(n1,n2);*/
    
    //Swapping without using third variable;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    
    cout<<"After Swapping Numbers are : "<<endl;
    cout<<n1<<" "<<n2<<endl;
}