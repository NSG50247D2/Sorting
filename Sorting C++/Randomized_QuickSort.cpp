//Randomized Quick Sort

#include<iostream>
using namespace std;

void swap(int *n1,int *n2)
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}

int partition(int *arr,int l,int r)
{
    int m=r-l+1;
    int x=rand()%m+l;
    swap(&arr[x],&arr[r]);
    int pivot=arr[r];
    int i=l-1,j=l;
    while(j<r)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
        j++;
    }
    swap(&arr[i+1],&arr[r]);
    return i+1;
}

void randomizedQuickSort(int *arr,int l,int r)
{
    if(l<r)
    {
        int idx=partition(arr,l,r);
        randomizedQuickSort(arr,l,idx-1);
        randomizedQuickSort(arr,idx+1,r);
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
    randomizedQuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

