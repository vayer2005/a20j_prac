
#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
void solve()
{
    int a,b,k;
    cin>>a>>b>>k;
    vector<int>boy(a,0);
    vector<int>girl(b,0);
    vector<int>ar1(k,0);
    vector<int>br(k,0);
    
    for(int i=0;i<k;i++)
    {
        cin>>ar1[i];
        boy[ar1[i]-1]++;
    }
    for(int i=0;i<k;i++)
    {
        cin>>br[i];
        girl[br[i]-1]++;
    }
    long long ans=0;
    for(int i=0;i<k;i++)
    {
        ans += k - boy[ar1[i]-1] - girl[br[i]-1] + 1;
    }     
    cout<<ans/2<<endl;
}
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}