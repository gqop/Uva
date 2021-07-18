#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==-1)
        {
            return 0;
        }
        if(n==0)
        {
            cout<<'0'<<' '<<'1'<<endl;
        }
        else
        {
            long long male_bee=0,female_bee=0;
            long long ly_male_bee=0,ly_female_bee=1;
            for(int i=1;i<=n;i++)
            {
                female_bee=ly_male_bee+1;
                male_bee=ly_male_bee+ly_female_bee;
                ly_female_bee=female_bee;
                ly_male_bee=male_bee;
            }
            cout<<male_bee<<' '<<male_bee+female_bee<<endl;
        }
    }
}
