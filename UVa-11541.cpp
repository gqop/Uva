#include<bits/stdc++.h>
using namespace std;

int string_to_int(string a)
{
    stringstream b;
    int c;
    b<<a;
    b>>c;
    return c;
}
int main()
{
    string input,cha,interger="0";
    int T,times=1;
    cin>>T;
    while(T--)
    {
        cin>>input;
        cout<<"Case "<<times<<": ";
        int ll=input.length();
        for(int i=0;i<ll;i++)
        {
            if(input[i]>='A'&&input[i]<='Z')
            {
                for(int j=0;j<string_to_int(interger);j++)
                {
                    cout<<cha;
                }
                cha=input[i];
                interger="0";
            }
            if(input[i]>='0'&&input[i]<='9')
            {
                interger+=input[i];
            }
        }
        for(int j=0;j<string_to_int(interger);j++)
        {
            cout<<cha;
        }
        interger="0";
        times++;
        cout<<endl;
    }
}
