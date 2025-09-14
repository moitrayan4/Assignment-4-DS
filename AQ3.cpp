#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int q[6] = {4, 7, 11, 20, 5, 9};
    int result[6];

    int half = n / 2;
    int k = 0;
    for (int i = 0; i < half; i++) {
        result[k++] = q[i];
        result[k++] = q[i + half];
    }

    cout << "Output: ";
    for (int i = 0; i < n; i++) cout << result[i] << " ";
    cout << endl;
    return 0;
}

