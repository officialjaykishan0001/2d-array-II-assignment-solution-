#include<iostream>
#include<vector>
using namespace std;
//dry run : arr 1 4 2 3 5 8 6 8
// l = 1
// m = 1
// k=0
//i = 3
// ans = 1 4 5 
int main()
{
    int n,m = 2;

    cout<<"enter how many intervala you are going to enter here : ";
    cin>>n;

    vector<vector<int> > arr(n,vector<int> (m));

    cout<<"enter your intervals below :"<<endl;

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
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    vector<vector<int> > ans;

    

    for(int i=1;i<(n);i++){
        if(arr[i-1][1]>arr[i][0])
        {
            vector<int> v;
            v.push_back(arr[i-1][0]);
            v.push_back(max(arr[i][1],arr[i-1][1]));
            ans.push_back(v);
        }
    }


    cout<<endl<<"the answer interval is "<<endl;

    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
//jai jai jai bajarangbali...
//this the greatfull moment for me.
