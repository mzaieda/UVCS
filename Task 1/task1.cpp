#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int> arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8,  9, 10 };
    cout << getSum(arr) << endl;
    return 0;
}