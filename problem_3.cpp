#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m=2;
    cout<<"let tell how many interval you want to give : ";
    cin>>n;

    vector<vector<int> > arr(n,vector<int> (m));

    cout<<endl<<"enter the intervals below : "<<endl;

    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<endl<<"your entered intervals are : "<<endl;

    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int count = 0;

    vector<vector<int> > ans;

    for(int i=1;i<(n);i++)
    {
        if(arr[i-1][1]<arr[i][0])
        {
            count ++;
        }
    }

    cout<<endl<<count<<endl;
    return 0;


}