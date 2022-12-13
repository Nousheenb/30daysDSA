// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void selectionSort(int arr[] , int n)
{
    for(int i=0 ; i<n-1  ; i++) {
        int j=i , k=i ;
        while( j < n)
        {
            if(arr[j] < arr[k])
            {
                k = j ; 
            }
            j++ ;
        }
        int temp = arr[k] ;
        arr[k] = arr[i] ;
        arr[i] = temp ;
    }
}
int main() {
    
    int  arr[4] = {2,3,1,4} ;
    
    selectionSort(arr , 4);
    
    for(int i=0 ; i<4 ;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
