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

int getMin(vector<int> arr) {
    int min = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8,  9, 10 };
    cout << getSum(arr) << endl;
    cout << getMin(arr) << endl;
    return 0;
}