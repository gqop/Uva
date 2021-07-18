#include<bits/stdc++.h>
using namespace std;

int main(){
    string database="qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    string input;
    getline(cin,input);
    int ll=input.length(),ll2=database.length();
    for(int i=0;i<ll;i++)
    {
        for(int j=0;j<ll2;j++)
        {
            if(input[i]==database[j]||input[i]==database[j]-32)
            {
                cout<<database[j-2];
            }
            if(input[i]==' ')
            {
                cout<<' ';
                break;
            }
        }
    }
    cout<<endl;
}

