#include<iostream>
using namespace std;
int main()
{
    int i,h,l,w,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>h>>w>>l;
        if(h<=20&&w<=20&&l<=20)
        {
            cout<<"Case "<<i<<": good"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": bad"<<endl;

        }

    }
    return 0;
}
