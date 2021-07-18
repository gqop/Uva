#include<iostream>
#include<sstream>
#include<cmath>
using namespace std;

string int_to_str(int a)
{
    stringstream b;
    string c;
    b<<a;
    b>>c;
    return c;
}
string dec_to_hex(string str)
{
    stringstream ss;
    string sum="";
    int num;
    string temp;
    ss<<str;
    ss>>num;
    if(num<10)
    {
        return str;
    }
    while(num>0)
    {
        if((num%16)<10)
        {
            temp=int_to_str(num%16);
        }
        else
        {
            if((num%16)==10)
            {
                temp='A';
            }
            else if((num%16)==11)
            {
                temp='B';
            }
            else if((num%16)==12)
            {
                temp='C';
            }
            else if((num%16)==13)
            {
                temp='D';
            }
            else if((num%16)==14)
            {
                temp='E';
            }
            else if((num%16)==15)
            {
                temp='F';
            }
        }
        num/=16;
        sum=temp+sum;
    }
    return sum;
}
int hex_to_dec(string str)
{
    int times=0,sum=0;
    int ll=str.length();
    for(int i=ll-1;i>1;i--)
    {
        if(str[i]=='0')
        {
            sum+=0;
        }
        else if(str[i]=='1')
        {
            sum+=pow(16,times)*1;
        }
        else if(str[i]=='2')
        {
            sum+=pow(16,times)*2;
        }
        else if(str[i]=='3')
        {
            sum+=pow(16,times)*3;
        }
        else if(str[i]=='4')
        {
            sum+=pow(16,times)*4;
        }
        else if(str[i]=='5')
        {
            sum+=pow(16,times)*5;
        }
        else if(str[i]=='6')
        {
            sum+=pow(16,times)*6;
        }
        else if(str[i]=='7')
        {
            sum+=pow(16,times)*7;
        }
        else if(str[i]=='8')
        {
            sum+=pow(16,times)*8;
        }
        else if(str[i]=='9')
        {
            sum+=pow(16,times)*9;
        }
        else if(str[i]=='A')
        {
            sum+=pow(16,times)*10;
        }
        else if(str[i]=='B')
        {
            sum+=pow(16,times)*11;
        }
        else if(str[i]=='C')
        {
            sum+=pow(16,times)*12;
        }
        else if(str[i]=='D')
        {
            sum+=pow(16,times)*13;
        }
        else if(str[i]=='E')
        {
            sum+=pow(16,times)*14;
        }
        else if(str[i]=='F')
        {
            sum+=pow(16,times)*15;
        }
        times+=1;
    }
    return sum;
}

int main()
{
    string str;
    int num;
    while(cin>>str)
    {
        if(str[0]=='-')
        {
            break;
        }
        else if(str[1]=='x')
        {
            cout<<hex_to_dec(str)<<endl;
        }
        else
        {
            cout<<"0x"<<dec_to_hex(str)<<endl;
        }
    }
}
