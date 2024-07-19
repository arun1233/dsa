// peak element in an array...
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int peak(vector<int>& a)
{
    int l=0,r=a.size()-1;
    while(l<r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]<a[mid+1])
        {
            l=mid+1;
        }
        else
        {
            r=mid;
        }
    }
    return a[l];
}
int main()
{
    int n;
    cout<<"enter no. of elements in array\n";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the array \n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int result=peak(arr);
    cout<<"the peak element of thr array is :"<<result;
    return 0;
}