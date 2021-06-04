#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll n,s,t;
    cin>>n;
    s=(n*(n+1))/2;
    int arr[n-1];
    for (int i=0;i<n-1;i++)
    {
        cin>>arr[i];
        t=s-arr[i];
        s=t;
        
    }
    cout<<t<<endl;
    

    return 0;
}
