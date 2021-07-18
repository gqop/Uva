#include<iostream>
using namespace std;

int main()
{
    int n,times=1,a=0;
    while(cin>>n)
    {
        string str;
        if(n==0)
        {
            return 0;
        }
        cin.get();
        cout<<"Case "<<times<<":"<<endl;
        cout<<"#include<string.h>"<<endl;
        cout<<"#include<stdio.h>"<<endl;
        cout<<"int main()"<<endl;
        cout<<"{"<<endl;
        while(n--)
        {
            getline(cin,str);
            if(str=="/n")
            {
                a=0;
            }
            else
            {
                int ll=str.length();
                cout<<"printf(\"";
                for(int i=0;i<ll;i++)
                {
                    if(str[i]=='"')
                    cout<<"\\"<<"\"";
                    else if(str[i]=='\\')
                    {
                        cout<<"\\"<<"\\";
                    }
                    else
                    {
                        cout<<str[i];
                    }
                }
                cout<<"\\n\");"<<endl;
            }

        }
        cout<<"printf"<<"(\"\\n\");"<<endl;
        cout<<"return 0;"<<endl;
        cout<<"}"<<endl;
        times++;
    }
}
