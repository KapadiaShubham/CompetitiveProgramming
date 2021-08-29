#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v) // passed by reference if you don't want to make copy
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // v.size() -> 0(1)
        cout << v[i] << " ";
    }
    v.push_back(2);
    cout << endl;
}

int main()
{
    pair<int, string> p;
    p = {2, "abc"};
    cout << p.first << " " << p.second << endl;

    pair<int, string> &p1 = p;
    p1.first = 3;
    cout << p1.first << " " << p1.second << endl;

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
    cout << "-- After swapping" << endl;
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    // cin >> p.first;
    // cout << p.first;

    vector<int> v;
    // vector<double> v;
    // vector<pair<int, string>> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x); // 0(1)
    // }
    // printVec(v);

    vector<int> vec(5); // elements = 0 by default
    vec.push_back(7);
    printVec(vec);
    vector<int> vec2(5, 3); // elements = 3
    vec2.pop_back();
    printVec(vec2); // 0(1)

    vector<int> v2 = vec;  // 0(n)
    vector<int> &v3 = vec; // passed by reference if you don't want to make copy
    v2.push_back(5);
    printVec(vec);
    printVec(v2);

    return 0;
}

// g++ -std=c++11 -o 1 1.cpp && ./1