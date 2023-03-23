/*---------------------------Selection Sort------------------------------
    Time Complexity:
    1. Best ----  O(n^2)
    2. Worse ---- O(n^2)
    3. Average ---- O(n^2)

    Space Complexity
    1. O(1)
*/

#include<iostream>
using namespace std;

void selectionSort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int m=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[m])
            {
                m=j;
            }
        }
        if(m!=i)
        {
            int t=arr[i];
            arr[i]=arr[m];
            arr[m]=t;
        }
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
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}