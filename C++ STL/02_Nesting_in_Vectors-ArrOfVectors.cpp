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
    freopen("output.txt", "w", stdout);
#endif

    int N;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }

    // OR
    vector<vector<int>> v2;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        // OR
        // v.push_back(vector<int>());
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
            // OR
            // v[i].push_back(x);
        }
        v2.push_back(temp);
    }
    v2[0].push_back(10);
    v2.push_back(vector<int>()); // pushed empty vector
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }
    cout << v[0][1];
    return 0;
}