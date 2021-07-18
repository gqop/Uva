#include<bits/stdc++.h>
using namespace std;

int str_to_int(string a)
{
    stringstream b;
    int c;
    b<<a;
    b>>c;
    return c;
}

string int_to_str(int a)
{
    stringstream b;
    string c;
    b<<a;
    b>>c;
    return c;
}
int main()
{
    string input;
    int _count=1;
    while(cin>>input)
    {
        if(_count!=1)
        {
            cout<<endl;
        }
        if(input=="0")
        {
            return 0;
        }
        bool a=1;
        int chain=0;
        vector <int> index;
        cout<<"Original number was "<<input<<endl;
        while(a)
        {
            int ll=input.length();
            sort(input.begin(),input.end());
            int rise=str_to_int(input);
            for(int i=0;i<ll;i++)
            {
                for(int j=i+1;j<ll;j++)
                {
                    if(input[i]<input[j])
                    {
                        swap(input[i],input[j]);
                    }
                }
            }
            int down=str_to_int(input);
            cout<<down<<" - "<<rise<<" = "<<down-rise<<endl;
            index.push_back(down-rise);
            for(int i=0;i<index.size();i++)
            {
                for(int j=i+1;j<index.size();j++)
                {
                    if(index[i]==index[j])
                    {
                        a=0;
                        break;
                    }
                }
                if(a==0)
                {
                    break;
                }
            }
            input=int_to_str(down-rise);
            chain+=1;
        }
        _count=0;
        cout<<"Chain length "<<chain<<endl;
    }
}

