#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements to be inserted:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
          int x;
          cout<<"enter the value:"<<endl;
          cin>>x;
          if(x%2==0)
          {
              cout<<"it is even"<<endl;
          }
          else{
              cout<<"it is odd:"<<endl;
          }
    }
    return 0;
}