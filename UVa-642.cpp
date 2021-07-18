#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<string> dictionary;
    vector<string> dictionary_sort;
    vector<string> compare_sort;
    vector<string> output;
    string str;
    int flag=1;
    while(getline(cin,str)&&str!="XXXXXX")
    {
        dictionary.push_back(str);
        sort(str.begin(),str.end());
        dictionary_sort.push_back(str);
    }
    while(getline(cin,str)&&str!="XXXXXX")
    {
        sort(str.begin(),str.end());
        compare_sort.push_back(str);
    }
    for(int i=0;i<compare_sort.size();i++)
    {
        flag=1;
        for(int j=0;j<dictionary_sort.size();j++)
        {
            if(compare_sort[i]==dictionary_sort[j])
            {
                output.push_back(dictionary[j]);
                flag=0;
            }
        }
        sort(output.begin(),output.end());
        for(int i=0;i<output.size();i++)
        {
            cout<<output[i]<<endl;
        }
        output.clear();
        if(flag==1)
        {
            cout<<"NOT A VALID WORD"<<endl;
        }
        cout<<"******"<<endl;
    }
}
