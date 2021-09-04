#include<iostream>
using namespace std;
int ucln(long a, long b)
{
    while(a!=b)
    {
        if(a > b)
        a -= b;
        else
        b -= a;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long a, b;
        cin >> a >> b;
        long bcnn = (a*b)/ucln(a,b);
        cout << bcnn << " " << ucln(a,b) << endl;
    }
}