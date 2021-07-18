#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string num1,num2;
        string num_inverse1="",num_inverse2="";
        cin>>num1>>num2;
        for(int i=num1.length()-1;i>=0;i--)
        {
            num_inverse1+=num1[i];
        }
        for(int i=num2.length()-1;i>=0;i--)
        {
            num_inverse2+=num2[i];
        }
        for(int i=0;i<num_inverse1.length();i++)
        {
            if(num_inverse1[i]>='1'&&num_inverse1[i]<='9')
            {
                num_inverse1.erase(0,i);
                break;
            }
        }
        for(int i=0;i<num_inverse2.length();i++)
        {
            if(num_inverse2[i]>='1'&&num_inverse2[i]<='9')
            {
                num_inverse2.erase(0,i);
                break;
            }
        }
        char sum[201];
        for(int i=0;i<201;i++)
        {
            sum[i]='0';
        }
        string _final="",inverse_final="";
        int times1=num_inverse1.length(),times2=num_inverse2.length();
        for(int i=200;i>200-num_inverse1.length();i--)
        {
            times1-=1;
            sum[i]= num_inverse1[times1];
        }
        for(int i=200;i>200-num_inverse2.length();i--)
        {
            times2-=1;
            sum[i]+=num_inverse2[times2];
        }
        for(int i=200;i>=0;i--)
        {
            if(sum[i]>=106)
            {
                sum[i]-=58;
                sum[i-1]+=1;
            }
            else if(sum[i]>=96&&sum[i]<=105)
            {
                sum[i]-=48;
            }
            else if(sum[i]==58)
            {
                sum[i]-=10;
                sum[i-1]+=1;
            }
        }
        for(int i=0;i<201;i++)
        {
            _final+=sum[i];
        }
        for(int i=0;i<_final.length();i++)
        {
            if(_final[i]>='1'&&_final[i]<='9')
            {
                _final.erase(0,i);
                break;
            }
        }
        for(int i=_final.length()-1;i>=0;i--)
        {
            inverse_final+=_final[i];
        }
        for(int i=0;i<inverse_final.length();i++)
        {
            if(inverse_final[i]>='1'&&inverse_final[i]<='9')
            {
                inverse_final.erase(0,i);
                break;
            }
        }
        cout<<inverse_final<<endl;
    }
}
