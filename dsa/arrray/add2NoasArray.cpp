#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>sum(vector<int>a,vector<int>b)
{
    vector<int>ans(0,0);
    int x=0,carry=0,d=0;
    int l1=a.size()-1,l2=b.size()-1;
    while(l1>=0 && l2>=0)
    {
        x=a[l1]+b[l2]+carry;
        carry=x/10;
        d=x%10;
        ans.push_back(d);
        l1--,l2--;
    }
    while(l1>=0)
    {
        x=a[l1]+0+carry;
        carry=x/10;
        d=x%10;
        ans.push_back(d);
        l1--;
    }
    while(l2>=0)
    {
        x=0+b[l2]+carry;
        carry=x/10;
        d=x%10;
        ans.push_back(d);
        l2--;
    }
    if(carry)
    {
        ans.push_back(carry);
    }
    reverse(a.begin(),a.end());
    return ans;
}
int main()
{
    int l1,l2;
    vector<int>a;
    vector<int>b;
    cout<<"enter the length of first no.\n";
    cin>>l1;
    cout<<"enter the first number\n";
    for(int i=0;i<l1;i++)
    {
        int value;
        cin>>value;
        a.push_back(value) ;
    }
    cout<<"enter the length of second no.\n";
    cin>>l2;
    cout<<"enter the second number\n";
    for(int i=0;i<l2;i++)
    {
        int value;
        cin>>value;
        b.push_back(value) ;
    } 
    cout<<"the first no. you entered is:\n"; 
    for(auto i:a)
    cout<<i;
    cout<<"\nthe second no. you enterd is :\n";
    for(auto i:b)
    cout<<i;
    cout<<"\nthe sum for the given numbers is:\n";
    vector<int>ans=sum(a,b);
    for(auto i:ans)
    cout<<i;
}