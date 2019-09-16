//Program to find LCM of a given array.
//Ahmad Javed

#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int lcmArray(int arr[], int len)
{
    int ans = arr[0];

    for(int i = 1;i < len;i++)
    {
        ans = ((arr[i] * ans)) /
                (gcd(arr[i], ans));
    }

    return ans;
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

    int lcm = lcmArray(arr, len);

    cout<<"LCM of the given array is: "<<lcm<<endl;

    return 0;
}
