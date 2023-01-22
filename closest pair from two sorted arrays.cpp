#include<bits/stdc++.h>
using namespace std;

void solve(int ar[],int br[],int n,int m,int x)
{
    int num1,num2;
    int diff=INT_MAX;
    int l=0,r=m-1;
    while(l<n && r>=0)
    {
        int sum=ar[l] + br[r];
        if(abs(sum-x) <diff)
        {
            num1=ar[l];
            num2=br[r];
            diff=abs(sum-x);
        }
        if(sum>x)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    cout<<"("<<num1<<" + "<<num2<<")="<<endl;
}

int main()
{
    int n,m,x;
    cin>>n;
    cin>>m;
    int ar[n+2],br[m+2];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>br[i];
    }

    cin>>x;
    sort(ar,ar+n);
    sort(br,br+m);

    solve(ar,br,n,m,x);
}
