/*---------------------------Insertion Sort------------------------------
    Time Complexity:
    1. Best ----  O(n^2)
    2. Worse ---- O(n^2)
    3. Average ---- O(n^2)

    Space Complexity
    1. O(1)
*/

#include<iostream>
using namespace std;

void insertionSort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int t=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>t)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;
    }
}


int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<(i+1)<<" element: ";
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}