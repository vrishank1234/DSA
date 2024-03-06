//insertion.
#include<iostream>
using namespace std;
class Queue{
    public:
    int* arr;
    int size;
    int Front;
    int rear;
    
    Queue(int size){
        this->size = size;
        Front= -1;
        rear = -1; 
        arr = new int[size];
        }
    void enqueue(int element)
    {
        if(rear == size-1)
        {
            cout<<"overflow";
            return;
        }
        if (Front ==-1 && rear == -1)
        {
            Front=0;
             rear++;
        }
        else{
            rear = rear+1;
        }
        arr[rear] = element;
    }
    void print()
    {
        for(int i=0; i<5;i++)
    {
        cout<<arr[i]<<" ,";
    }
    }
};

int main()
{
Queue s1(5);
s1.enqueue(10);
s1.enqueue(89);
s1.enqueue(60);
s1.enqueue(83);
s1.enqueue(70);
s1.print();

return 0;
}