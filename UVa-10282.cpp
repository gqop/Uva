#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    map<string,string> dictionary;
    while(getline(cin,str)&&str!="")
    {
        stringstream temp;
        temp<<str;
        string original;
        string translation;
        temp>>translation>>original;
        dictionary[original]=translation;
    }
    while(getline(cin,str))
    {
        if(dictionary.find(str)!=dictionary.end())
        {
            cout<<dictionary.find(str)->second<<endl;
        }
        else
        {
            cout<<"eh"<<endl;
        }
    }
}

