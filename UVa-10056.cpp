#include<bits/stdc++.h>
using namespace std;

int main()
{
    int S,n,i;
    long double p,first_term,common_ratio,series_sum;
    cin>>S;
    while(S--)
    {
        cin>>n>>p>>i;
        int round=0;
        if(p==0)
        {
            cout<<0.0000<<endl;
        }
        else
        {
            first_term=p*pow(1-p,i-1);
            common_ratio=pow(1-p,n);
            series_sum=first_term/(1-common_ratio);
            cout<<fixed<<setprecision(4)<<series_sum<<endl;
        }
    }
}


