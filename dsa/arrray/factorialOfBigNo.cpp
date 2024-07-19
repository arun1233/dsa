// factorial of a big number
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>factorial(int n)
{
    vector<int>ans;
    ans.push_back(1);
    int c=0;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<ans.size();j++)
        {
            int x=ans[j]*i+c;
            ans[j]=x%10;
            c=x/10;
        }
        while(c)
        {
            ans.push_back(c%10);
            c/=10;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    cout<<"enter the no. whose factorial is to be calculated:\n";
    int n;
    cin>>n;
    cout<<"calculating....\n";
    vector<int>x=factorial(n);
    cout<<"the factorial of "<<n<<" is :"; 
    for(int e:x)
    {
        cout<<e;
    }
}