#include<iostream>
using namespace std;

int LinearSearch(int arr[],int len,int key)
{
	for(int i=0;i<len;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	//consider an array in heap memory
	int *arr;
	arr=new int[5];
	arr[0]=1,arr[1]=2,arr[2]=9,arr[3]=3,arr[4]=12,arr[6];
	
	//key to be searched
	int key;
	cout<<"Enter element to be searched:";
	cin>>key;
	
	int idx;
	int len=5;
	idx=LinearSearch(arr,len,key); //call
	
	if(idx>0){
		cout<<"Element found at index "<<idx;
	}
	else{
		cout<<"Element not found";
	}
	return 0;
}
