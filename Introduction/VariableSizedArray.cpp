#include <iostream>
using namespace std;

int main(){
    
    int n, query, size;
    int s = 0;
    cin >> n >> query;
    int *arr[n];

    while (n != 0){
        cin >> size;
        arr[s] = new int[size];

        for (int i = 0; i<size; i++){
            cin >> arr[s][i];
        }
        n--;
        s++;
    }

    // pertanyaan
    int which, index;
    for (int j = 0; j<query; j++){
        cin >> which >> index;
        cout << arr[which][index] << endl;
    }
    
    return 0;
}
