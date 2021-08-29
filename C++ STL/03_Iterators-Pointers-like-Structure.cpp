#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt ", "w", stdout);
#endif

    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it = v.begin();
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << endl;
    }
    return 0;
}