#include<iostream>
using namespace std;
int main()
{
    int n, i;
    float arr[50], sum=0, armean;
    cout<<"Enter Total No. of Elements ";
    cin>>n;
    cout<<"\nEnter "<<n<<" Number of Elements: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum = sum+arr[i];
    }
    armean = sum/n;
    cout<<"\nArithmetic Mean of "<<n<<" Number of Elements is found to be = "<<armean;
    cout<<endl;
    return 0;
}
