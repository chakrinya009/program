#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    for(i=0;i<2;i++)
    {
        v.push_back(i);
    }
    for(int &i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}