#include<vector>
#include<iostream>
using namespace std;
void wave(vector<vector<int>>mat)
{
    int r=mat.size();
    int c=mat[0].size();
    for(int i=0;i<r;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<c;j++)
            {
                cout<<mat[i][j]<<" ";
            }
        }
        else
        {
            for(int j=c-1;j>=0;j--)
            {
                cout<<mat[i][j]<<" ";
            }
        }
    }
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
    cout<<"printing the matrix's spiral form data\n";
    wave(matrix);
}