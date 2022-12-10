#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)  // n = no.of elements
    {
        for(int i=0 ; i<n-1 ;i++)// no of passes or cycles
        {
            
            //if no swapping is done in a pass , then the array has been sorted
            bool  swapped = false ;   // optimisation
            
            
            // "n-1-i" means after completion of every pass one element will be sorted already , so to skip the comparision
            for(int j=0 ; j<n-1-i ;j++)    //comparision loop
            {
                if(arr[j] > arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1] ;
                    arr[j+1] = temp ;
                    
                    swapped = true ;         
                }
            }
            
            if (swapped == false)
            {
                return ; 
            }
        }
    }

int main()
{
    int arr[4] = {2,1,4,3};
    
    bubbleSort(arr , 4);
    
    for(int i=0 ; i<4 ;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
