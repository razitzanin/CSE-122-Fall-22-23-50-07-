#include <iostream>

using namespace std;

int main()
{
    int n,m,b;
    cin >> n;
    string s,d[n],z;
    for(m=0;m<n;m++)
    {
        cin >> s;
        d[m]=s;
        }

    for(b=0;b<n;b++)
    {
        z=d[b];
        if (z.length() > 10)
        {
            cout << z[0] << z.length() - 2 << z[z.length() - 1] << endl;
        }
        else
        {
            cout << z << endl;
        }
    }
    return 0;
}


