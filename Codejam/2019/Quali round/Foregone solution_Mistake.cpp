#include<bits/stdc++.h>
#include<string>
using namespace std;
void solve()
{
    long long int n,c;
    cin>>n;
    long long int b;
    b=n/2;
    c=n/2;
    long long int val_add;

    string f= to_string(b);
    string g= to_string(c);
    val_add=1;
    for(int i=f.length()-1; i>=0; --i)
    {
        if(f[i]=='4')
        {
            b+=val_add;
            c-=val_add;
        }
        val_add=val_add*10;
    }
     for(int i=f.length()-1; i>=0; --i)
    {
        string h;
        h=to_string(c);
        if(h[i]=='4')
        {
            c+=val_add;
            b-=val_add;
        }
        val_add=val_add*10;
    }

    cout<<b<<' '<<c<<endl;
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
