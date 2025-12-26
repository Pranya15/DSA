#include <iostream>
using namespace std;

#define size 5

int queue[size];
int front = 0;
int rear = 2;

void deleteCQ()
{
    // Check for Queue Empty
    if (front == -1)
    {
        cout << "Queue Underflow";
    }
    else
    {
        cout << "Deleted element = " << queue[front];

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    }
}

int main()
{
    deleteCQ();
    return 0;
}