#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   int test,i,n,m,a,k;
    while(scanf("%d",&test)==1)

    {
      for(k=1;k<=test;k++)
        {
            m=0;
            cin>>n;
            for(i=0;i<n;i++)
            {
                cin>>a;
                if(a>m)
                {
                   m=a;
                }
            }
            cout<<"Case "<<k<<": "<<m<<endl;
        }
    }
}
