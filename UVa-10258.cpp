#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int str_to_int(string a)
{
    int b;
    stringstream c;
    c<<a;
    c>>b;
    return b;
}
struct contest{
    int team;
    int quest;
    int time[10]={0};
    char solve[10]={'E'};
    int correct=0;
    int false_time[10]={0};
    int sum;
};
int main()
{
    int n;
    int _count=0;
    cin>>n;
    n++;
    cin.get();
    while(n--)
    {
        if(_count>=2)
        {
            cout<<endl;
        }
        _count++;
        contest index;
        vector<contest> temp;
        string s;
        while(getline(cin,s)&&s!="")
        {
            int flag=0;
            int ll=temp.size();
            for(int i=0;i<10;i++)
            {
                index.time[i]=0;
            }
            for(int i=0;i<10;i++)
            {
                index.solve[i]='E';
            }
            for(int i=0;i<10;i++)
            {
                index.false_time[i]=0;
            }
            stringstream transfer_to_data;
            transfer_to_data<<s;
            transfer_to_data>>index.team>>index.quest>>index.time[index.quest]>>index.solve[index.quest];
            if(index.solve[index.quest]=='I')
            {
                index.false_time[index.quest]+=20;
            }
            else
            {
                index.false_time[index.quest]+=0;
            }
            if(temp.empty())
            {
                temp.push_back(index);
            }
            else
            {
                for(int i=0;i<ll;i++)
                {
                    if(index.team==temp[i].team)
                    {
                        flag=1;
                        if(temp[i].solve[index.quest]=='C')
                        {
                            break;
                        }
                        else if(temp[i].time[index.quest]<index.time[index.quest])
                        {
                            temp[i].time[index.quest]=index.time[index.quest];
                        }
                        temp[i].solve[index.quest]=index.solve[index.quest];
                        temp[i].false_time[index.quest]+=index.false_time[index.quest];
                    }
                    else if(flag==1)
                    {
                        break;
                    }
                    else if((i==ll-1)&&(index.team!=temp[i].team))
                    {
                        temp.push_back(index);
                    }
                }
            }
        }
        for(int i=0;i<temp.size();i++)
        {
            temp[i].sum=0;
        }
        for(int i=0;i<temp.size();i++)
        {
            for(int j=0;j<10;j++)
            {
                if(temp[i].solve[j]=='C')
                {
                    temp[i].correct+=1;
                    temp[i].sum+=temp[i].time[j];
                    temp[i].sum+=temp[i].false_time[j];
                }
            }
        }
        for(int i=0;i<temp.size();i++)
        {
            for(int j=i+1;j<temp.size();j++)
            {
                if(temp[i].correct<temp[j].correct)
                {
                    swap(temp[i].team,temp[j].team);
                    swap(temp[i].correct,temp[j].correct);
                    swap(temp[i].sum,temp[j].sum);
                }
                else if(temp[i].correct==temp[j].correct)
                {
                    if(temp[i].sum>temp[j].sum)
                    {
                        swap(temp[i].team,temp[j].team);
                        swap(temp[i].sum,temp[j].sum);
                    }
                    else if(temp[i].sum==temp[j].sum)
                    {
                        if(temp[i].team>temp[j].team)
                        {
                            swap(temp[i].team,temp[j].team);
                        }
                    }
                }
            }
        }
        for(int i=0;i<temp.size();i++)
        {
           cout<<temp[i].team<<' '<<temp[i].correct<<' '<<temp[i].sum<<endl;
        }
        temp.clear();
    }
}

