#include<bits/stdc++.h>
using namespace std;
int num1,num2;
bool solve(int ar[],int n,int x)
{

    int i=0;
    int j=n-1;
    while(i<j)
    {
        int sum = ar[i] + ar[j];
        if(sum == x)
        {
            num1=ar[i];
            num2=ar[j];
            return true;
        }
        if(sum > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}

int main()
{
    int n,x;
    cin>>n;
    int ar[n+4];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cin>>x;
    bool res = solve(ar,n,x);
    if(res == true)
    {
        cout<<num1<<" "<<num2<<endl;
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
