#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(k=1;k<(i*2);k++)
        {
            cout<<k;
        }
        cout<<"\n";
    }

    for(i=n-1;i>=1;i--)
    {
        for(j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(k=1;k<(i*2);k++)
        {
            cout<<k;
        }
        cout<<"\n";
    }
    return 0;
}


