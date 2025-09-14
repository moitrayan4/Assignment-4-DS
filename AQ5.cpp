//(a)

#include <iostream>
using namespace std;

int main() {
    int q1[100], q2[100];
    int f1 = 0, r1 = -1, f2 = 0, r2 = -1;

    r2++; q2[r2] = 1;
    while (f1 <= r1) { r2++; q2[r2] = q1[f1++]; }
    for (int i = 0; i <= r2; i++) q1[i] = q2[i];
    f1 = 0; r1 = r2; f2 = 0; r2 = -1;

    r2++; q2[r2] = 2;
    while (f1 <= r1) { r2++; q2[r2] = q1[f1++]; }
    for (int i = 0; i <= r2; i++) q1[i] = q2[i];
    f1 = 0; r1 = r2; f2 = 0; r2 = -1;

    r2++; q2[r2] = 3;
    while (f1 <= r1) { r2++; q2[r2] = q1[f1++]; }
    for (int i = 0; i <= r2; i++) q1[i] = q2[i];
    f1 = 0; r1 = r2; f2 = 0; r2 = -1;

    cout << "Stack: ";
    for (int i = f1; i <= r1; i++) cout << q1[i] << " ";
    cout << endl;

    cout << "Popped: " << q1[f1++] << endl;
    cout << "Stack: ";
    for (int i = f1; i <= r1; i++) cout << q1[i] << " ";
    return 0;
}


//(b)
#include <iostream>
using namespace std;

int main() {
    int q[100];
    int f = 0, r = -1;

    r++; 
    q[r] = 1;
    for (int i = 0; i < r; i++) { r++; q[r] = q[f++]; }


    r++; 
    q[r] = 2;
    for (int i = 0; i < r; i++) { r++; q[r] = q[f++]; }

    r++; 
    q[r] = 3;
    for (int i = 0; i < r; i++) { r++; q[r] = q[f++]; }

    cout << "Stack: ";
    for (int i = f; i <= r; i++) cout << q[i] << " ";
    cout << endl;

    cout << "Popped: " << q[f++] << endl;
    cout << "Stack: ";
    for (int i = f; i <= r; i++) cout << q[i] << " ";
    return 0;
}
