#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using std::string;

int  main()
{
    int t;
    cin>>t;
    string number;
    vector<string> phone={};
    while(t--)
    {
        int a=0;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>number;
            phone.push_back(number);
        }
        sort(phone.begin(),phone.end());
        for(int i=0;i<n;i++)
        {
            if(i==n-1)
            {
                cout<<"YES"<<endl;
                break;
            }
            for(int j=i+1;j<n;j++)
            {
                int ll=phone[i].length();
                string c=phone[j].substr(0,ll);
                if(phone[i]==c)
                {
                    cout<<"NO"<<endl;
                    a=1;
                    break;
                }
            }
            if(a==1)
            {
                break;
            }
        }
        phone.clear();
    }
}
