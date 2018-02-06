#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int test,n,a[20],i;
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
       for(i=0; i<n; i++)
        {
            cout<<a[i];
        }
       cout<<(a[n-1]-a[0])*2;
    }
    return 0;
}
