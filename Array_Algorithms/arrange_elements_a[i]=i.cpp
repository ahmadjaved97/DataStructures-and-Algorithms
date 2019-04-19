#include<bits/stdc++.h>

using namespace std;

void rearrange_array(int arr[], int n)
{
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        if (s.find(i) != s.end())
            arr[i] = i;
        else
            arr[i] = -1;
    }

    cout<<"Array after rearrangement is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    rearrange_array(arr,n);
    return 0;
}
