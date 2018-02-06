#include<iostream>
using namespace std;
int main()
{
    int test,n,ans;
    cin>>test;
    while(test--)
    {
        cin>>n;
        ans=(n*63+7492)*5-498;
        if(ans<0)
        {
            ans=ans/(-1);
            ans=(ans/10)%10;
        }
        else
        {
            ans=(ans/10)%10;

        }
        cout<<ans<<endl;

    }
    return 0;
}
