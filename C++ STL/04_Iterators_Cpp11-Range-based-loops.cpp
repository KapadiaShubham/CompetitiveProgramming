#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt ", "w", stdout);
#endif
    vector<int> v = {2, 3, 5, 6, 7};
    // for (int i = 0; i < v.size(); ++i)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    for (int &value : v) // passed as reference, otherwise value++ will not make any difference. Bcz a copy is sent in it
    {
        value++;
        // cout << value << " ";
    }
    cout << endl;
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}