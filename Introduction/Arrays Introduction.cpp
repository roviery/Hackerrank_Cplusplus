#include <iostream>
using namespace std;

int main(){
    int n, a[10000];

    cin >> n;

    for (int i = 0; i<n; i++){
        cin >> a[i];
    }

    for (int k = n-1; k>=0; k--){
        cout << a[k] << " ";
    }


    return 0;
}