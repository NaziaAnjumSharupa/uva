#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[10000],j,i,p,b,h,w,pri,bed,cost;
    while(scanf("%d%d%d%d",&p,&b,&h,&w))
    {
        j=0;
        for(i=0; i<h; i++)
        {
            cin>>pri;
            for(i=0; i<w; i++)
            {
                cin>>bed;
                if(bed>=p)
                {
                    cost=p*pri;
                    if(cost<=b)
                    {
                        a[j++]=cost;

                    }
                }
            }
        }

    }
    if(j==0)
    {
        cout<<"stay home"<<endl;
    }
    else
    {
        sort(a,a+j);
        cout<<a[0]<<endl;
    }


    return 0;
}
