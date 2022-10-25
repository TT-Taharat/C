#include<bits/stdc++.h>
using namespace std;

bool event_checker(int a[], int n) {
    int i, cnt=0 ;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 )
        cnt++;
     }
     if(cnt>=1)
        return true ;
     else
        return false;
}

int main()
{
    int i,a[100],n;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];

    if(event_checker(a, n)==1)
        cout << "Yes" << endl ;
    else
        cout << "No" ;
      return 0;
}
