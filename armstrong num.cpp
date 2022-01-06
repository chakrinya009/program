#include<iostream>
using namespace std;
int main()
{
    int n,r,temp,sum=0;
    cout<<"enter the number:"<<endl;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum+=r*r*r;
        n=n/10;
    }
    if(sum==temp)
    {
        cout<<temp<< "is armstrong number :)";
    }
    else{
        cout<<temp<< "is not a armstron number :(";
    }
    return 0;
}
    
