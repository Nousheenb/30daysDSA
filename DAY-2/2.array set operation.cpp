#include<iostream>
using namespace std;

//get function 
void set(int arr[],int len,int idx,int element)
{
	if(idx>=0 && idx<len)
	{
		arr[idx]=element;
	}
}

int main()
{
	//defining an array in heap caus we need to modify it permanently
	int *arr;
	int len=5;
	arr=new int[5];
	arr[0]=2,arr[1]=3,arr[2]=67,arr[3]=9,arr[4]=23;
	
	//printitng beforesetting
	cout<<"Array before setting"<<endl;
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	//index at which element is to be changed
	int idx;
	int element;
	cout<<endl;
	cout<<"Enter the index:";
	cin>>idx;
	cout<<"Enter the element:";
	cin>>element;
	
	
	//call
	set(arr,len,idx,element);
	
	
	//printitng after setting
	cout<<"Array after setting"<<endl;
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
