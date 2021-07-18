#include<iostream>
using namespace std;

int row,col;
char oil[101][101];

void visit(int r, int c)
{
    oil[r][c] = '*';
    for(int i=-1; i<=1; i++)
    {
        for(int j=-1; j<=1; j++)
        {
            if((r+i>=0&&r+i<row)&&(c+j>=0&&c+j<col))
            {
                if(oil[r+i][c+j]=='@')
                {
                    visit(r+i,c+j);
                }
            }
        }
    }
}
int main()
{
    while(cin>>row>>col)
    {
        int count=0;
        if(row==0||col==0)
        {
            return 0;
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cin>>oil[i][j];
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(oil[i][j]=='@')
                {
                    visit(i, j);
                    count+=1;
                }
            }
        }
        cout<<count<<endl;
    }
}
