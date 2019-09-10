//Program for Quick Sort
//Ahmad Javed

#include<bits/stdc++.h>

using namespace std;

int arrayPartition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j)
    {
        do{
            i++;
        }while(arr[i] <= pivot);

        do{
            j--;
        }while(arr[j] > pivot);

        if(i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = arrayPartition(arr, low, high);
        quickSort(arr,low,pi);
        quickSort(arr,pi+1,high);
    }
}

void printArray(int arr[], int len)
{
    for(int i = 0;i < len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int len;
    cout<<"Enter the size of array: ";
    cin>>len;

    int arr[len];
    cout<<"Enter array elements: "<<endl;
    for(int i = 0;i < len;i++)
    {
        cin>>arr[i];
    }

    quickSort(arr,0,len - 1);
    printArray(arr,len);

    return 0;
}
