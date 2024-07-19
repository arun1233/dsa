//find pivot element...(using biniary)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findPivot(vector<int>& array)
{
    int start=0,end=array.size()-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(array[mid]>array[mid+1]) 
            return mid;
        if(array[mid]<array[mid-1])
            return mid-1;
        if(array[mid]<array[start])
            end=mid-1;
        else
            start=mid+1;
    }
    return 0;
}
int main()
{
    int size;
    cout<<"enter the size of array\n";
    cin>>size;
    vector<int>arr(size);
    cout<<"enter the element in the array \n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"finding the piviot element in the array.....\n";
    int result=findPivot(arr);
    cout<<"the pivot element is at index: "<<result<<" and the pivot element is: "<<arr[result];
    return 0;
}