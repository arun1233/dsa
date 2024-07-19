// //optimized...{negative marking method} fonding missing element 
// in an array with duplicates//
#include<iostream>
#include<vector>
using namespace std;
int mising(vector<int>&a)
{
    cout<<"finding.......\n";
    int i=0;
    while(i<a.size())
    {
        int index=abs(a[i]);//catch abs use kyu kiya? mhi krte to kya hota?
        if(a[index-1]>0)//catch  {index-1 kyu use kiya index kyu ni kiya ?ans copy m h}
            a[index-1]*=-1;
            i++;
    }
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>0)
            return i+1;//catch why i+1 why not i?ans in copy
    }
    return -1;
}
int main()
{
    int n;
    cout<<"n = ";
    cin>>n;
    vector<int>a(n);
    cout<<"size of array ->"<<a.size();
    cout<<"\nenter data\n";
    for(int i=0;i<a.size();i++){
        cin>>a[i];
        }
    int d=mising(a);
    cout<<"missing no. is : "<<d<<endl;
    return 0;
}