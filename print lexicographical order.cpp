#include<bits/stdc++.h>
using namespace std;
 int dfs(int i,int n)
 {
     if(i>n)
     {
         return 0;
     }
     cout<<i<<endl;
     for(int j=0;j<=9;j++)
     {
         dfs(i*10 + j,n);
     }
      
 }

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=9;i++)
    {
        dfs(i,n);
    }
}
