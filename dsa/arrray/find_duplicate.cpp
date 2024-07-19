//negative marking method
#include<iostream>
#include<vector>
using namespace std;
int duplicate(vector<int>&a)
{
    cout<<"finding.......\n";
    int ac=-1;
    for(int i=0;i<a.size();i++)
    {
        int ans=abs(a[i]);//catch why use abs?if not used what will happen?
        cout<<"at "<<i<<" index "<<"ans= "<<ans;cout<<endl;
        if(a[ans]<0)
        {
            ac=ans;
            break;
        }
        a[ans] *=-1;
    }
    return ac;
}
int main()
{
    int n;
    cout<<"n = ";
    cin>>n;
    vector<int>a(n+1);
    cout<<"size of array ->"<<a.size();
    cout<<"\nenter data\n";
    for(int i=0;i<a.size();i++){
      //  int t;
        cin>>a[i];
     //   a.push_back(t);
        }
    int d=duplicate(a);
    cout<<"duplicate no. is : "<<d<<endl;
    return 0;
}