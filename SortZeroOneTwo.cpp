#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void SortZeroOneTwo(int arr[], int n){
	int start=0;
	int end=n-1;
	int mid=0;
	while(mid<=end){
		switch(arr[mid]) {
			case 0:
				swap(arr[start++], arr[mid++]);
				break;
				
			case 1:
				mid++;
				break;
			
			case 2:
				swap(arr[mid], arr[end--]);
				break;
		}
	}
}

void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
int main() {
	
	int arr1[]={0,2,2,1,1,0,0,1};
	int arr2[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
//	char ch[]={'A','b','c'};
	int size=sizeof(arr2)/sizeof(arr2[0]);
//	cout<<"Size of Array is : "<<size<<endl;
	SortZeroOneTwo(arr2, size);
	printArray(arr2, size);
	return 0;
}