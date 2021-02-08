#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec;
    int n;
    cin >> n;
    int last;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
        if (i == n - 1)
        {
            last = a;
        }
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        vector<int>::iterator low, up;
        int x;
        cin >> x;

        if (binary_search(vec.begin(), vec.end(), x))
        {
            low = lower_bound(vec.begin(), vec.end(), x);
            cout << "Yes " << (low - vec.begin() + 1) << endl;
        }
        else
        {
            up = upper_bound(vec.begin(), vec.end(), x);
            cout << "No " << (up - vec.begin() + 1) << endl;
        }
    }
    return 0;
}
