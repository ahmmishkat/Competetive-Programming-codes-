#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int m,n;
    cin>>m>>n;
    int mat[m][n];
    for(int c=1; c<=(m*2)+1; c++)
    {
        for(int r=1; r<=(n*2)+1; r++)
        {
            if(r==1 && c==1|| r==1 && c==2 || r==2 && c==1 || r==2 && c==2 )
            {
                cout<<".";
            }
            else
            {
                if(r%2==0 && c%2!=0)
                {
                    cout<<"-";
                }
                else if(r%2!=0 && c%2!=0)
                {
                    cout<<"+";
                }
                else if(r%2==0 && c%2==0)
                {
                    cout<<".";
                }
                if(r%2!=0 && c%2==0)
                {
                    cout<<"|";
                }
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cout<<"Case #"<<i<<":"<<endl;
        solve();
    }
}
