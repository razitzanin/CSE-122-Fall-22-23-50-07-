#include<iostream>
#include <utility>
using namespace std;
int main()
{
    int n,j,petya,vasya,tonya,k;
    int m=0;
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>petya>>vasya>>tonya;
        k=petya+vasya+tonya;
        if(k>=2)
        {
            m=m+1;
        }
        else
        {
            m=m+0;
        }
    }
    cout<<m;
    return 0;

}
