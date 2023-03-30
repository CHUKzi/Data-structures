#include <iostream>

using namespace std;

class que{
private:
    int rear;
    int frnt;
    int maxs;
    int *arr;

public:
    que(int s);
    //~que();
    void enqueue(int x);
    int dequeue();
    int peek();
    bool isEmpty();
    bool isFull();
    //int qsize();
};

que::que(int s){

    arr=new int[s];
    maxs = s;
    frnt = 0;
    rear = -1;
}

bool que::isEmpty(){
    if(rear==-1){
        return true;
    } else {
        return false;
    }
}

bool que::isFull(){
    if(rear==maxs-1){
        return true;
    } else {
        return false;
    }
}

void que::enqueue(int x){

    if(isFull()){
        cout<<"Queue is Full"<<endl;
    } else {

        rear++;
        arr[rear]=x;
    }
}

int que::dequeue(){

    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
    } else {
        int out = arr[frnt];
        frnt++;
        return out;
    }
}

int que::peek(){

    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
    } else {

    int display = arr[frnt];
    return display;

    }
}

int main()
{
    que q(10);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    //cout<<q.peek()<<endl;

    cout<<q.dequeue()<<endl;

    return 0;
}
