#include<iostream>

using namespace std;
int main()
{
    string str;
    cout<<"enter string:"<<endl;
    cin>>str;
    int count=0;
    int i;
    for(i=0;str[i]!='\0';i++)
    {
         count++;
    }
    cout<<"reverse string:"<<endl;
    for(int j=count-1;j>=0;j--)
    {
         cout<<str[j];
    }
    return 0;
}