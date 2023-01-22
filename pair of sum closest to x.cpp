#include<bits/stdc++.h>
using namespace std;
int num1,num2;
void solve(int ar[],int n,int x)
{

    int i=0;
    int j=n-1;
    int val=INT_MAX;
    while(i<j)
    {
        int sum=abs(ar[i]+ar[j]);
        if(val>abs(sum-x))
        {
            num1=i;
            num2=j;
            val=abs(sum-x);
        }
        if(sum>x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<ar[num1]<<" "<<ar[num2]<<endl;
}

int main()
{
    int n,x;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cin>>x;

    solve(ar,n,x);
}
