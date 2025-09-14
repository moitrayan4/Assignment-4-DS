#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int cq[5];
    int front = -1, rear = -1;

    while (true) {
        cout << "\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\n";
        int choice; 
        cin >> choice;

        if (choice == 1) {
            if ((rear + 1) % size == front) {
                cout << "Circular Queue Full!\n";
            } else {
                int val; cout << "Enter value: "; cin >> val;
                if (front == -1) front = rear = 0;
                else rear = (rear + 1) % size;
                cq[rear] = val;
                cout << "Enqueued: " << val << endl;
            }
        } 
        else if (choice == 2) {
            if (front == -1) {
                cout << "Circular Queue Empty!\n";
            } else {
                cout << "Dequeued: " << cq[front] << endl;
                if (front == rear) front = rear = -1;
                else front = (front + 1) % size;
            }
        } 
        else if (choice == 3) {
            if (front == -1) cout << "Circular Queue Empty!\n";
            else cout << "Front: " << cq[front] << endl;
        } 
        else if (choice == 4) {
            if (front == -1) cout << "Circular Queue Empty!\n";
            else {
                int i = front;
                while (true) {
                    cout << cq[i] << " ";
                    if (i == rear) break;
                    i = (i + 1) % size;
                }
                cout << endl;
            }
        } 
        else if (choice == 5) break;
        else cout << "Invalid choice!\n";
    }
    return 0;
}
