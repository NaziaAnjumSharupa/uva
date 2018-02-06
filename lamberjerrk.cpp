#include<iostream>
using namespace std;
int main()
{
    int a[20],i,c,s,t;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;

    while(t--)
    {
       c=0;
       s=0;
        for(i=0; i<10; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<10; i++)
        {
            if(a[i]<a[i+1])
            {
                c++;
            }
            else if(a[i]>a[i+1])
            {
                s++;
            }
        }
        if(c==10 || s==9)
        {
            cout<<"Ordered"<<endl;
        }
        else
        {
            cout<<"Unordered"<<endl;
        }

    }
    return 0;
}
