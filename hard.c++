#include <iostream>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;


    int count = 0;

    for (int i = 1; i <= n; i*= 10) {
        int divider = i * 10;
        count += (n / divider) * i + min( max(n % divider - i + 1, 0), i);
    }

     cout << count <<  endl;

}