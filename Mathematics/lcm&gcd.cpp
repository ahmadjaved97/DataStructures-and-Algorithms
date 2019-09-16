//Program to find LCM & GCD of two numbers
//Ahmad Javed

#include<bits/stdc++.h>

using namespace std;

//Function to find GCD(Greatest Common Divisor)
int gcd(int num1, int num2)
{
    if(num2 == 0)
        return num1;
    return gcd(num2, num1 % num2);
}

// Function to find LCM(Least Common Multiple)
int lcm(int num1, int num2)
{
    return (num1 * num2)/gcd(num1, num2);
}

int main()
{
    int num1, num2;
    cout<<"Enter two numbers whose GCD and LCM you want to find: ";
    cin>>num1>>num2;

    int GCD = gcd(num1, num2);
    int LCM = lcm(num1, num2);

    cout<<"GCD of "<<num1<<" & "<<num2<<" is: "<<GCD<<endl;
    cout<<"LCM of "<<num1<<" & "<<num2<<" is: "<<LCM<<endl;

    return 0;
}
