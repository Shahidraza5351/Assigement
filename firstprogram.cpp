#include<iostream>
using namespace std;
unsigned long long fact(int x)
{
    if (x==0||x==1)
    return 1;
    else
    return x*fact(x-1);
}
int main()
{
    int x;
    cout<<"Enter the number";
    cin>>x;
    unsigned long long result=fact(x);
    cout<<"Fcatorial of number "<<x<<" is "<<result<<endl;
    return 0;
}