#include<iostream>
#include<set>
using namespace std;
void find(int p,int q,int r,int a[],int b[],int c[])
{
    set<int>ans;
    int i=0,j=0,k=0;
    while(i<p && j<q && k<r)
    {
        if(a[i]==b[j] && b[j]==c[k])
        {
            cout<<a[i]<<" is the common element!!!\n";
            ans.insert(a[i]);
            i++;j++;k++;
        }
        else if(a[i]<b[j])
            i++;
        else if(b[j]<c[k])
            j++;
        else
            k++;
    }
    cout<<"all the common elemnts are :\n";
    for(auto i:ans)
    cout<<i<<", ";
}
int main()
{
    int p,q,r;
    cout<<"enetr the size of each array\nenter the size of first array 'a'\n";
    cin>>p;
    cout<<"enter the size of second array 'b'\n";
    cin>>q;
    cout<<"enter the size of third array 'c'\n";
    cin>>r;
    int *a=new int[p];
    cout<<"enter the data of first array\n";
    for(int i=0;i<p;i++)
    cin>>a[i];
    int*b=new int[q];
    cout<<"enter the data of second array\n";
    for(int j=0;j<q;j++)
    cin>>b[j];
    int*c=new int[r];
    cout<<"enter the data of third array\n";
    for(int k=0;k<r;k++)
    cin>>c[k];
    find(p,q,r,a,b,c);
}   
