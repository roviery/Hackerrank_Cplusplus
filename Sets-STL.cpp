#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<int> s;
    set<int>::iterator itr;
    //query
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int type, x;
        cin >> type;
        cin >> x;
        if (type == 1)
        {
            s.insert(x);
        }
        else if (type == 2)
        {
            itr = s.find(x);
            if (itr != s.end())
            {
                s.erase(x);
            }
        }
        else if (type == 3)
        {
            itr = s.find(x);
            if (itr != s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
