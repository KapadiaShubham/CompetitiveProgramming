#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt ", "w", stdout);
#endif

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator it;

    for (it = v_p.begin(); it != v_p.end(); ++it)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    // OR
    for (it = v_p.begin(); it != v_p.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    // (*it).first <=> (it->first)

    return 0;
}