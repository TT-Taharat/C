#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[1000],k,n,cnt=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        if(a[i]<=k)
            cnt++;
        cout<<cnt;


    return 0;
}
