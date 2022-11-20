#include<iostream>
using namespace std;

int LinearSearch(int arr[],int len,int key)
{
	for(int i=0;i<len;i++)
	{
		if(arr[i]==key)
		{
			
			//move to front technique
			int temp;
			temp=arr[i];
			arr[i]=arr[0];
			arr[0]=temp;
			return 0;
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
	
	if(idx>=0){
		cout<<"Element found at index "<<idx<<endl;
	}
	else{
		cout<<"Element not found";
	}
	
	//elements after move front technique
	cout<<"array after move front"<<endl;
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
