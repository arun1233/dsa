//modulas approach.....(i+k)%n
#include<iostream>
#include<vector>
using namespace std;
void shift(vector<int>&a,int k)
{
    int n=a.size();
    vector<int>t(n);
    for(int i=0;i<n;++i)
    {
        int q=(i+k)%n;
        cout<<"\nvalue storing at index (new index)"<<q<<endl;
        t[q]=a[i];
    }
    a=t;
    cout<<"\nprinting data in a:\n";
    for(auto i:a)
        cout<<i<<" ";
}
int main()
{
    vector<int>a(7);
    cout<<"enter data:\n";
    for(int i=0;i<a.size();i++)
    {
        cin>>a[i];
    }
    cout<<"enter the no. of time you want to shift: \n";
    int k;
    cin>>k;
    shift(a,k);
    return 0;
}