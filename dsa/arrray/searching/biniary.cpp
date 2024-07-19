//first occurence of a no. in an array...
//catch make sure the array is sorted
#include<iostream>
using namespace std;
int find_first(int arr[],int n,int t)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==t)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>t)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
    int find_last(int arr[],int n,int t)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==t)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>t)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int find(int arr[],int n,int t)
{
    int total=(find_last(arr,n,t)-find_first(arr,n,t))+1;
    return total;
}
int main()
{
    int arr[]={10,20,30,30,30,30,30,30,90};
    int target=30;
    int n=(sizeof(arr)/sizeof(arr[0]));
    int ans=find(arr,n,target);
    if(ans==-1)
    {
        cout<<"element not found \n";
    }
    else
    {
        cout<<"elements total occurence in the array: "<<ans<<endl;
    }
    return 0;
}
