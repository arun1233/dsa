//approach 2
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
double find(vector<int>nums,int k)
{
    int s=0,i=0,j=k-1;
    for(int x=i;x<=j;x++)
        {
            s+=nums[x];
        }
    int sum=s;j++;
    while(j<nums.size())
        {
            s-=nums[i++];
            s+=nums[j++];
            sum=max(s,sum);
        }
    double avg=sum/(double)k;
    return avg;
}
int main()
{
    vector<int>nums;
    int k;
    cout<<"enter the length of the array\n";
    int n;
    cin>>n;
    cout<<"enter the array\n";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"enter the lenght of contigous subarray you want\n";
    cin>>k;
    while(k>nums.size()-1||k<1)
    {
        cout<<"invalid input :(\nplease try again later ~~ \n";
        return -1;
    }
    double f=find(nums,k);
    cout<<"maximum average ="<<f<<endl; 
    return 0;
}