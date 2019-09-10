//Program for Bubble Sort
//Ahmad Javed

#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int len)
{
    for(int i = 0;i < len;i++)
    {
        for(int j = 0;j < len - i - 1;j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    cout<<"Enter the size of the array: ";
    cin>>len;

    int arr[len];
    cout<<"Enter array elements: "<<endl;
    for(int i = 0;i < len;i++)
    {
        cin>>arr[i];
    }

    bubbleSort(arr,len - 1);
    printArray(arr,len);

    return 0;
}
