#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter the no of rows : ";
    cin>>n;
    cout<<"enter the no of colums : ";
    cin>>m;

    vector<vector<int>> v(n,vector<int> (m));

    cout<<endl<<"enter the element of the 2d array : "<<endl;

    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cin>>v[i][j];
        }
    }

    int flag = 0;

    for(int i=0;i<(n-1);i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if(v[i][j] == v[i+1][j+1])
            {
                flag = 1;
            }
            else{
              flag =  -1;
            }
        }
    }

    cout<<"the answer is : "<<(flag)<<endl;
    return 0;
}