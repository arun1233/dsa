# include<iostream>
#include <unordered_map>
using namespace std;
void find(int arr[],int n)
{
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(hash[arr[i]]>1)
        {
            cout<<i+1;
            break;
        }
    }
    cout<<"\nkhtm\n";
}
int main()
{
    int n,arr[]={1,2,3,4,5,32,4,22,11};
    n=sizeof(arr)/sizeof(arr[0]);
    find(arr,n);
}