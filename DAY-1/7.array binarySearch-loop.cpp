#include<iostream>
using namespace std;

int BinarySearch(int arr[],int l,int h,int key)
{
	
	while(l<h)  //breaking condition
	{
		int mid=(l+h)/2;
		if(key==arr[mid]){
			return mid;
		}
		else if(key<arr[mid]){
			h=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return -1;
}



int main(){
	int arr[7]={2,4,6,8,10,12,14};
	int key;
	cout<<"Enter search element:";
	cin>>key;
	
	
	int n=7;
	int l=0;
	int h=n-1;
	
	int idx;
	idx=BinarySearch(arr,l,h,key);
	
	if(idx>=0){
		cout<<"Element found at index "<<idx<<endl;
	}
	else{
		cout<<"Element not found";
	}
	return 0;
	
}
