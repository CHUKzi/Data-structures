#include <iostream>

using namespace std;

class stck {
    private:
        int maxs;
        int top;
        int *arr;

    public:
        stck(int s);
        bool isFull();
        bool isEmpty();
        void  push(int x);
        int pop();
        int peek();
        void display();
};

stck::stck(int s) {

    s=maxs;
    arr=new int[s];
    top=-1;
}

bool stck::isFull() {

    if(top==maxs-1){
        return true;
    } else {
        return false;
    }
}

bool stck::isEmpty() {

    if(top==-1){
        return true;
    } else {
        return false;
    }
}

void stck::push(int x){

    if(isFull()){
        cout<<"Stack is Full"<<endl;
    } else {
        top++;
        arr[top]=x;
    }

}

int stck::pop(){

    if(isEmpty()){
        cout<<"Stack is Empty"<<endl;
    } else {
        int out = arr[top];
        top--;
        return out;
    }

}

int stck::peek(){
    if(isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }else {
        return arr[top];
    }

}

void stck::display(){

    if(isEmpty()){
        cout<<"Stack is Empty"<<endl;
    } else {

        int n=sizeof(arr)/sizeof(arr[0]);

        for(int x=n;x>-1;x--)
        {
            cout<<arr[x]<<endl;
        }
    }

}

int main()
{
    stck s(10);
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);

    cout<<s.pop()<<endl;

    //cout<<s.peek()<<endl;
    //s.display();
    return 0;
}
