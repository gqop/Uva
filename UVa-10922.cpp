#include<iostream>
#include<sstream>
using namespace std;

int char_to_int(char a)
{
    stringstream b;
    int c;
    b<<a;
    b>>c;
    return c;
}

int main()
{
    string str;
    while(getline(cin,str)&&str!="0")
    {
        int degree=0,sum=0;
        int ll=str.length();
        for(int i=0;i<ll;i++)
        {
            sum+=char_to_int(str[i]);
        }
        while(1)
        {
            if((sum%9)!=0)
            {
                break;
            }
            else if(sum==9)
            {
                degree+=1;
                break;
            }
            else
            {
                int temp=0;
                while(sum>0)
                {
                    temp+=(sum%10);
                    sum/=10;
                }
                sum=temp;
                degree++;
            }
        }
        if(degree>0)
        {
            cout<<str<<" "<<"is a multiple of 9 and has 9-degree "<<degree<<"."<<endl;

        }
        else
        {
            cout<<str<<" "<<"is not a multiple of 9."<<endl;
        }
    }
}
