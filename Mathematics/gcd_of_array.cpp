//Program to find GCD of given array
//Ahmad Javed

#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int gcdArr(int arr[], int len)
{
    int ans = arr[0];
    for(int i = 1;i < len;i++)
    {
        ans = gcd(arr[i], ans);
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

    int gcdarr = gcdArr(arr, len);

    cout<<"GCD of the given array is: "<<gcdarr<<endl;

    return 0;
}
