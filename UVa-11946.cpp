#include<iostream>
using namespace std;

int main()
{
    char word[10]={'O','I','Z','E','A','S','G','T','B','P'};
    char number[10]={'0','1','2','3','4','5','6','7','8','9'};
    int n;
    string s;
    cin>>n;
    if(n==0)
    {
        return 0;
    }
    cin.get();
    while(n--)
    {
        while(getline(cin,s))
        {
            int ll=s.length();
            if(s=="/n")
            {
                cout<<endl;
                break;
            }
            for(int i=0;i<ll;i++)
            {
                if(s[i]>='0'&&s[i]<='9')
                {
                    for(int j=0;j<10;j++)
                    {
                        if(s[i]==number[j])
                        {
                            s[i]=word[j];
                            break;
                        }
                    }
                }
            }
            for(int i=0;i<ll;i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
    }
}
