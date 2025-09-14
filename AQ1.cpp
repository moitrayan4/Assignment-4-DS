#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

bool isEmpty() {
    return (front == -1 || front > rear);
}

bool isFull() {
    return (rear == MAX - 1);
}

void enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full. Cannot insert " << value << endl;
    } else {
        if (front == -1)  // First element being inserted
            front = 0;
        rear++;
        queue[rear] = value;
        cout << "Inserted " << value << " into the queue." << endl;
    }
}


void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty. Cannot dequeue." << endl;
    } else {
        cout << "Removed element: " << queue[front] << endl;
        front++;
    }
}


void display() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Front element: " << queue[front] << endl;
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n--- Queue Operations Menu ---\n";
        cout << "1. Enqueue (Insert)\n";
        cout << "2. Dequeue (Remove)\n";
        cout << "3. Check if Queue is Empty\n";
        cout << "4. Check if Queue is Full\n";
        cout << "5. Display Queue\n";
        cout << "6. Peek Front Element\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                if (isEmpty())
                    cout << "Queue is empty." << endl;
                else
                    cout << "Queue is not empty." << endl;
                break;

            case 4:
                if (isFull())
                    cout << "Queue is full." << endl;
                else
                    cout << "Queue is not full." << endl;
                break;

            case 5:
                display();
                break;

            case 6:
                peek();
                break;

            case 0:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 0);

    return 0;
}
