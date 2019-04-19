//Write a function that rotates arr[] of size n by d elements.

#include<iostream>
#include<bits/stdc++.h>
                                                                        /*Time complexity: O(n)
                                                                          Auxiliary Space: O(d)*/
using namespace std;

void arr_rotate(int arr[], int n, int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i] = arr[i];
    }

    for(int i=0;i<n-d;i++)
    {
        arr[i] = arr[i+d];
    }

    for(int i=n-d ,j=0;i<n,j<d;i++,j++)
    {
        arr[i] = temp[j];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n, d;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter rotation number"<<endl;
    cin>>d;
    int arr[n], temp[d];
    cout<<"Enter array elements: ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The rotated array is: "<<endl;
    arr_rotate(arr,n,d);
    return 0;
}
