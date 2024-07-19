#include<iostream>
#include<vector>
using namespace std;
vector<int>spiral(vector<vector<int>>&mat)
{
    int r=mat.size();
    int c=mat[0].size();
    int t=r*c;
    int sr=0,sc=0,er=r-1,ec=c-1;
    int count=0;
    vector<int>a;
    while(count<t)
    {
        for(int i=sc;i<=ec && count<t;i++)
        {
            a.push_back(mat[sr][i]);
            count++;
        }//1
        ++sr;
        for(int i=sr;i<=er && count<t;i++)
        {
            a.push_back(mat[i][ec]);
            count++;
        }//2
        --ec;
        for(int i=ec;i>=sc && count<t;i--)
        {
            a.push_back(mat[er][i]);
            count++;
        }//3
        --er;
        for(int i=er;i>=sr && count<t;i--)
        {
            a.push_back(mat[i][sc]);
            count++;
        }//4
        ++sc;
    }
    return a;
}
int main()
{
    int r,c;
    vector<vector<int>>matrix;
    cout<<"lets make the table:\n";
    cout<<"how many rows you want?\n";
    cin>>r;
    cout<<"how many columns you want?\n";
    cin>>c;
    cout<<"enter the data in the table.\n";
    for(int i=0;i<r;i++)
    {
        vector<int>row;
        for(int j=0;j<c;j++)
        {
            int value;
            cin>>value;
            row.push_back(value);
        }
        matrix.push_back(row);
    }
    cout<<"printing the actual matrix:\n";
    for(auto i:matrix)
    {
        cout<<"\n";
        for(auto j:i)
        {
            cout<<j<<" ";
        }
    }
    cout<<"\nprinting the matrix's spiral form data\n";
    vector<int>ans;
    ans=spiral(matrix);
    cout<<"\n";
    for(auto i:ans)
    cout<<i<<" ";
    return 0;
}