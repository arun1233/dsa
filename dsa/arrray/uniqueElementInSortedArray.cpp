#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a;int x;
    cout<<"enter the array\n";
    for(int i=0;i<10;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    int i=0,j=1;
    while(j<a.size())
    {
        if(a[j]==a[i])
        j++;
        else a[++i]=a[j++];
    }
    cout<<"array after operation\n";
    for(auto i:a)
        cout<<i;
    cout<<"\nno. of  elements without duplicacy= "<<i+1<<"\n";
    cout<<"the array after removing duplicates is: ";
    for(int j=0;j<i+1;j++)
        cout<<a[j]<<" ";
    return 0; 
}