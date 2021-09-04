#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, m = 2;
        cin >> n;
        while(n!=1)
        {
            while(n%m == 0)
            {
                n/=m;
                cout << m << " ";
            }
            m++;
        }
        cout << endl;
    }
}