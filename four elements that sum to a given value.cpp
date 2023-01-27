#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int l=j+1;
            int r=n-1;
            while(l<r)
            {
                int sum = arr[i]+arr[j]+arr[l]+arr[r];
                if(sum==x)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[l]<<" "<<arr[r]<<endl;
                }
                if(sum>x)r--;
                else l++;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int x;
    cin>>x;
    solve(arr,n,x);
}
