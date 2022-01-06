#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements to find the factorial:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
         int num;
         cout<<"enter the number to be checked:"<<endl;
         cin>>num;
         cout<<" 1 is a factor of"<<num<<endl;
         for(int j=2;j<=num/2;j++)
         {
             
             if(num%j==0)
             {
                 cout<<j<<" is a factor of"<<num<<endl;
             }
             
             
         }

          cout<<num<<" is a factor of "<<num<<endl;
         cout<<endl<<endl;
    }
    return 0;
}