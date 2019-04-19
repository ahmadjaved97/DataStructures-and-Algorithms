#include<bits/stdc++.h>
                                                                /* Time Complexity: O(n*d)
                                                                   Auxiliary Space: O(1)
                                                                */
using namespace std;

void rotateByOne(int arr[], int n)
{
    int i;
    int temp = arr[0];
    for(i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[i] = temp;
}

void array_rotate(int arr[], int d, int n)
{
    for(int i=0;i<d;i++)
    {
        rotateByOne(arr,n);
    }
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n, d;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the number of rotations: ";
    cin>>d;

    int arr[n];
    cout<<"Enter array elements: ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    array_rotate(arr,d,n);
    printArray(arr,n);
    return 0;

}
