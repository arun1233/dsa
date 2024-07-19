#include<iostream>
#include<vector>
using namespace std;
void wave_print(vector<vector<int>>&matrix)
{
    int row=matrix.size();
    int col=matrix[0].size();
    for(int c=0;c<col;c++)
    {
        if(c%2==0)
        {
            for(int r=0;r<row;r++)
            cout<<matrix[r][c]<<" "; 
        }
        else
        {
            for(int r=row-1;r>=0;r--)
            cout<<matrix[r][c]<<" ";
        }
    }
}
int main()
{
    int r,c;
    vector<vector<int>>mat;
    cout<<"Let's make the matrix: \n";
    cout<<"enter no. of rows in the matrix:\n";
    cin>>r;
    cout<<"enter no. of columns in the matrix:\n";
    cin>>c;
    for(int i=0;i<r;i++)
    {
        vector<int>row;
        for(int j=0;j<c;j++)
        {
            int value;
            cout<<"enter the values for "<<i+1<<" row and "<<j+1<<" col.\n that is cell no. ["<<i<<","<<j<<"]\n";
            cin>>value;
            row.push_back(value);
        }
        mat.push_back(row);    
    }
    cout<<"printing actual matrix\n";
    for(auto ro:mat)
    {
        cout<<endl;
        for(auto col:ro)
        {
            cout<<col<<" ";
        }
    }
    cout<<"\nwave form values from the matrix \n";
    wave_print(mat);
}