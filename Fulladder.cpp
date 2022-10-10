#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum,carry;
    cout<<"enter the values:";
    cin>>a;
    cin>>b;
    cin>>c;
    sum=a or  b or c;
    carry=a and b and c;
    cout<<sum<<endl;
    cout<<carry;
    return 0;
}
