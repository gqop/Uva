#include<iostream>
using namespace std;

int main()
{
    int T,times=1;
    cin>>T;
    while(T--)
    {
        string str;
        int _size,row,col,temp=0;
        cin>>str>>str>>_size;
        long long matrix[_size][_size];
        for(int i=0;i<_size;i++)
        {
            for(int j=0;j<_size;j++)
            {
                cin>>matrix[i][j];
            }
        }
        for(int i=0;i<_size;i++)
        {
            for(int j=0;j<_size;j++)
            {
                row=_size-1-i;
                col=_size-1-j;
                if(matrix[i][j]!=matrix[row][col])
                {
                    cout<<"Test #"<<times<<": ";
                    cout<<"Non-symmetric."<<endl;
                    temp=1;
                    break;
                }
                else if(matrix[i][j]<0)
                {
                    cout<<"Test #"<<times<<": ";
                    cout<<"Non-symmetric."<<endl;
                    temp=1;
                    break;
                }
                else if(i==_size-1&&j==_size-1&&matrix[i][j]==matrix[row][col])
                {
                    cout<<"Test #"<<times<<": ";
                    cout<<"Symmetric."<<endl;
                }
            }
            if(temp==1)
            {
                break;
            }
            else
            {
                temp=0;
            }
        }
        times+=1;
    }
}
