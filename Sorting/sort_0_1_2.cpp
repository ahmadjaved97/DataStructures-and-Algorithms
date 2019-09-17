//Program to sort 0's, 1's and 2's in an array(Dutch National Flag Problem)
//Ahmad Javed

#include<bits/stdc++.h>

using namespace std;

void sort012(int arr[], int len)
{
    int low = 0;
    int high = len - 1;
    int mid = 0;

    while(mid <= high)
    {
        switch(arr[mid])
        {
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;

            case 1:
                mid++;
                break;

            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }
}

void printArr(int arr[], int len)
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
    cout<<"Enter array length: ";
    cin>>len;

    int arr[len];
    cout<<"Enter array element: "<<endl;
    for(int i = 0;i < len;i++)
    {
        cin>>arr[i];
    }

    sort012(arr, len);

    printArr(arr, len);

    return 0;

}
