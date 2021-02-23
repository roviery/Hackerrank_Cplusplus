#include <iostream>
using namespace std;

void print_ptr(int *a, int*b){
    int sum, minus;
    sum = *a+*b;
    minus = *a-*b>0 ? *a-*b:-(*a-*b);
    cout << sum << endl;
    cout << minus << endl;

}

int main(){
    int a,b;
    int *pa = &a, *pb = &b;
    
    cin >> a >> b;

    print_ptr(pa, pb);
}
