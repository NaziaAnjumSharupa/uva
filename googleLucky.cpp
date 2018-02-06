#include<iostream>
using namespace std;
int main()
{
   int t,i[12],m,j,n=1;
   string a,b,c,d,e,f,g,h,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>i[0];
        cin>>b>>i[1];
        cin>>c>>i[2];
        cin>>d>>i[3];
        cin>>e>>i[4];
        cin>>f>>i[5];
        cin>>g>>i[6];
        cin>>h>>i[7];
        cin>>x>>i[8];
        cin>>y>>i[9];
        m=0;
        for(j=0; j<10; j++)
        {
            if(j[i]>m)
                m=j[i];
        }
        cout<<"Case #"<<n++<<":"<<endl;
        for(j=0; j<10; j++)
        {
            if(i[j]==m)
            {
                if(j==0)
                    cout<<a<<endl;
                if(j==1)
                    cout<<b<<endl;
                if(j==2)
                    cout<<c<<endl;
                if(j==3)
                    cout<<d<<endl;
                if(j==4)
                    cout<<e<<endl;
                if(j==5)
                    cout<<f<<endl;
                if(j==6)
                    cout<<g<<endl;
                if(j==7)
                    cout<<h<<endl;
                if(j==8)
                    cout<<x<<endl;
                if(j==9)
                    cout<<y<<endl;
            }
        }




    }
    return 0;
}
