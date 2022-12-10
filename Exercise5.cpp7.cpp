#include<iostream>
#include<string>
using namespace std;
int main()
{
    string ch;
    int sum=0;
    int i;
    cout<<"\n Enter your comment and put a dot at the end of your comment:";
    cin>>ch;
    for(int i=0; i<ch.length();i++)
    cout<<"\n Assci code is:"<<(int) ch[i];
    sum+=i;
    cout<<"\n the checksum is:"<<sum/64.0+32;
    return 0;
}
