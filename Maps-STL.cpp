#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    map <string, int> m;
    map <string, int>::iterator itr;
    int q;
    cin >> q;
    for (int i = 0; i<q; i++){
        int type;
        cin >> type;
        string s;
        cin >> s;
        if (type == 1){
            int marks;
            cin >> marks;
            itr = m.find(s);
            if (itr != m.end()){
                itr->second += marks;
            }
            else{
            m.insert(make_pair(s, marks));
            }   
        }
        else if (type == 2){
            itr = m.find(s);
            if (itr != m.end()){
                itr->second = 0;
            }
        }
        else if (type == 3){
            itr = m.find(s);
            if (itr != m.end())
                cout << itr->second << endl;
            else{
                cout << "0" << endl;
            }
        }
    }

    return 0;
}