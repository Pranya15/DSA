#include <iostream>
using namespace std;

#define size 5

int queue[size];
int front = -1;
int rear = -1;

void insertCQ(int value)
{
    // Check for Queue Full
    if ((rear + 1) % size == front)
    {
        cout << "Queue Full";
    }
    else if (front == -1)   // Queue Empty
    {
        front = 0;
        rear = 0;
        queue[rear] = value;
    }
    else
    {
        rear = (rear + 1) % size;
        queue[rear] = value;
    }
}

int main()
{
    insertCQ(10);
    insertCQ(20);
    insertCQ(30);
    return 0;
}