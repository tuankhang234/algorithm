#include <bits/stdc++.h>
using namespace std;
int main()

{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t;
        cin>>t;
        for(int k=0; k<t; k++)
        {
                int n;
                cin >> n;
                vector<int>arr(n);
                for(int i=0; i<n; i++)
                {
                        cin>>arr[i];
                }
                if(n==1)
                {
                        cout<<0<<endl;
                        continue;
                }
                int tang=0,giam=0; int temp=0;
                int ans=0;
                for(int i=1; i<n; i++)
                {
                        if(arr[i]>=arr[i-1])
                        {
                                tang++;
                                temp=tang;
                                giam=0;
                        }
                        else
                        {
                                if(giam+1<=temp)
                                {
                                        ans++;
                                        giam++;
                                        tang=0;
                                }
                        }
                }
                cout<<ans<<endl;
        }
}
