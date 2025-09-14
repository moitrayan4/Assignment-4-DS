#include <iostream>
using namespace std;

int main() {
    string s = "aabc";
    int freq[256] = {0};
    char q[100]; 
    int front = 0, rear = -1;

    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];
        freq[ch]++;
        rear++;
        q[rear] = ch;

        while (front <= rear && freq[q[front]] > 1) {
            front++;
        }

        if (front <= rear) cout << q[front] << " ";
        else cout << -1 << " ";
    }
    return 0;
}
