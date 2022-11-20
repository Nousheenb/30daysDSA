#include<iostream>
using namespace std;

//deletion function
void deletion(int arr[],int &len,int idx)  //len is taken as reference , to modify its value originally
{
	if(idx<=len)
	{
		for(int i=idx;i<len-1;i++)
		{
			arr[i]=arr[i+1];
		}
		len--;
	}
}
int main(){
	int size, len;
	cout<<"Enter size of an array:";
	cin>>size;
	cout<<"Enter length of array:";
	cin>>len;
	
	//pointer to point array
	int *arr;
	arr=new int[size];
	
	//taking input elements
	cout<<"Enter elements into array"<<endl;
	for(int i=0;i<len;i++){
		cin>>arr[i];
	}
	
	//taking index at which element has to be deleted
	int idx;
	cout<<"Enter index at which element is to be deleted:";
	cin>>idx;
	
	deletion(arr,len,idx);
	
	//printing output elements
	for(int i=0;i<len;i++){
		cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
	}
	return 0;	
}
