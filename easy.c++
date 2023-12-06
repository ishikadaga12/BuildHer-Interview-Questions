#include <iostream>
#include <vector>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int numRows;
    cin >> numRows;

    vector<vector<int>> ans;

    for (int i = 0; i < numRows; i++) {
        vector<int> temp(i + 1);

        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                temp[j] = 1;
            } else {
                temp[j] = (ans[i - 1][j - 1] + ans[i - 1][j]);
            }
        }

        ans.push_back(temp);
    }

    for (const auto &row : ans) {
        for (const int &element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
