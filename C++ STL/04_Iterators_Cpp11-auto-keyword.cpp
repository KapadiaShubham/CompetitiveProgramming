#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt ", "w", stdout);
#endif
    vector<int> v = {2, 3, 5, 6, 7};

    // vector<int>::iterator it;
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    for (int &value : v)
    {
        value++;
    }
    cout << endl;
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}};
    for (auto &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }
    auto a = 1.0;

    return 0;
}