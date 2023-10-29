#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#define endl "\n"
#define vi vector<long long>
#define vvi vector<vi>
#define ll long long
#define sort(arr) sort(arr.begin(), arr.end())
#define reverse(arr) reverse(arr.begin(), arr.end());
#define isInt(a) (abs(a - round(a)) < 1e-15)
const long long int mod1 = 1e9 + 7;
using namespace std;
/*Here i will projects my mistakes and new things that i have learnt
1.Check out the endl stuff.
2.Map stuff -> for(auto x:ma) x.first x.second
3.For sorting in descending order -> first sort then reverse
4.Instead of map try to use vector<pair<ll,ll>> access element by 'arr[i].first' 'arr[i].second' 
5.When you need to find a ans in decimal and need to divide numbers by 2 then multiply all the values by 2 and when you need to show the ans do this, cout<<ans/2<<"."<<(ans%2)*5<<endl;*/
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll t;
    cin >> t;
    for(int tc=1;tc<=t;tc++)
    {
        cout << "Case #" << tc << ": ";

    }
    
    return 0;
}
