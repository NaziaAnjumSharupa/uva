#include<iostream>
using namespace std;
int main()
{
    int j=1,s=0,c=0,n,a[1001];
    while(true)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
                if(a[i]==0)
                {
                    c++;
                }
                else
                {
                    s++;
                }
            }
            cout<<"Case "<<j<<": "<<(s-c)<<endl;
            j++;
        }
        c=0;
        s=0;
    }


    return 0;
}
