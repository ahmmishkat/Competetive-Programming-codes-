#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    string f,g;
    cin>>f;
    g="";
    for (int i=0;i<f.length();i++)
    {
        g.insert(i,"a");
    }
    for (int i=f.length()-1;i>=0;i--)
    {
        if (f[i]=='4')
        {
            f[i]='2';
            g[i]='2';
        }
    }
    for (int i=g.length()-1;i>=0;i--)
    {
        if (g[i]=='a')
            g[i]='0';
    }
    ll int num1=stoi(f);
    ll int num2=stoi(g);
    cout<<num1<<' '<<num2<<" "<<endl;
}
int main()
{
    int n;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cout<<"Case #"<<i<<":"<<" ";
        solve();
    }
}
