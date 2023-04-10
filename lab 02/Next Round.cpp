#include<iostream>
#include <utility>
using namespace std;

int main()
{
    int n,k,i;
    int advance=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
     cin>>a[i];
     if(a[i]>=a[k-1] && a[i]>0)
     {
         advance++;
     }
     else
     {
         advance=advance+0;
     }
    }
    cout<<advance;
    return 0;

}
