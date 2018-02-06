#include<iostream>
using namespace std;
int main()
{
    int t,n,num,mc,jc,k=1;
    cin>>t;
    while(t--)
    {
       mc=0;
       jc=0;
       cin>>n;
       while(n--)
       {

        cin>>num;
        mc+=(num/30)*10+10;
        jc+=(num/60)*15+15;
       }
       cout<<"Case "<<k++<<": ";
       if(mc<jc)
        cout<<"Mile "<<mc<<endl;
       else if(jc<mc)
        cout<<"Juice "<<jc<<endl;
       else
        cout<<"Mile Juice "<<mc<<endl;
    }
    return 0;
}
