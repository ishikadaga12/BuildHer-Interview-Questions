#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void printElements(const vector<int>& arr)
{
  
    int n = arr.size();
    int x = n / 3;
     

    unordered_map<int, int> mp;
     
    for (int i = 0; i < n; i++) {
        if (mp.find(arr[i]) == mp.end()) {
            mp[arr[i]] = 1;
        } else {
            mp[arr[i]]++;
        }
    }
     
    vector<int> result;
    for (auto entry : mp) {
        if (entry.second > x) {
            result.push_back(entry.first);
        }
    }
 
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printElements(arr);
    return 0;
}
