#include<iostream>
using namespace std;
int main()
{
    int i,n,a=0,b=1,c;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(i=0;i<n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}