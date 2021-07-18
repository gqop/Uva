#include<bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    char str;
    int _count=0;
    while(getline(cin,sentence))
    {
        if(_count!=0)
        {
            cout<<endl;
        }
        int ll=sentence.length(),freq[95]={0},ascii[95]={0},dec=32;
        for (int i=0;i<ll;i++)
        {
            str=sentence[i];
            freq[str-32]+=1;
        }
        for(int i=0;i<95;i++)
        {
            ascii[i]=dec;
            dec++;
        }
        for(int i=0;i<95;i++)
        {
            for(int j=i+1;j<95;j++)
            {
                if((freq[i]>freq[j])&&(freq[i]!=0)&&(freq[j]!=0))
                {
                    swap(freq[i],freq[j]);
                    swap(ascii[i],ascii[j]);
                }
                else if((freq[i]==freq[j])&&(freq[i]!=0)&&(freq[j]!=0))
                {
                    if(ascii[i]<ascii[j])
                    {
                        swap(freq[i],freq[j]);
                        swap(ascii[i],ascii[j]);
                    }
                }
            }
        }
        for(int i=0;i<95;i++)
        {
            if(freq[i]!=0)
            {
                cout<<ascii[i]<<' '<<freq[i]<<endl;
            }
        }
        _count++;
    }
}
