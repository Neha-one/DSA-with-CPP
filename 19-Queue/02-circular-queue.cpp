#include <iostream>
using namespace std;
class Queue
{
  int *arr;
  int currSize;
  int capacity;
  int front, rear;

public:
  Queue(int capacity)
  {
    this->capacity = capacity;
    arr = new int[capacity];
    currSize = 0;
    front = 0;
    rear = -1;
  }
  void push(int data)
  {
    if (currSize == capacity)
    {
      cout << "queue is full." << endl;
      return;
    }
    rear = (rear + 1) % capacity;
    arr[rear] = data;
    currSize++;
  }
  void pop()
  {
    if (currSize == 0)
    {
      cout << "queue is empty." << endl;
      return;
    }
    front = (front + 1) % capacity;
    currSize--;
  }
  int getFront()
  {
    if (currSize == 0)
    {
      cout << "queue is empty." << endl;
      return -1;
    }
    return arr[front];
  }
  bool empty()
  {
    return currSize == 0;
  }
};
int main()
{
  Queue q(5);
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  cout << "Front element: " << q.getFront() << endl;
  q.pop();
  cout << "Front element: " << q.getFront() << endl;
  q.push(5);
  cout << "Front element: " << q.getFront() << endl;
  return 0;
}