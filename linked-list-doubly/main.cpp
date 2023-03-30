#include <iostream>

using namespace std;

class Link {
public:
    int dData;
    Link *next;
    Link *previous;

    Link (int data);
    void displayLink();
};

class Linklist {
private:
    Link *first;
    Link *last

public:
    Linklist();
    void insertFirst(int data);
    Link *Find(int data);
    int deleteFirst();
    bool deleteNode(int data);
    void displayList();
};

Link::Link(int data){

dData=data;
next=NULL;
previous=NULL;
}

void Link::displayLink(){
cout<<dData<<endl;
}

Linklist::Linklist(){
first=NULL;
last=NULL;
}

void Linklist::insertFirst(int data){

Link*newLink=new Link(data);

if(first==NULL) {
    first=newLink;
    last=newLink;
} else {
    newLink->next=first;
    first->previous=newLink;
    first= newLink;

}


}

int Linklist::deleteFirst(){

Link*temp=first;
first=first->next;
int y=temp->dData;
delete temp;

return y;
}

Link *Linklist::Find(int data){

Link *current=first;

    while(current!=NULL) {

        if(current->dData==data) {
            return current;
        } else {
            return current=current->next;
        }
    }
    return NULL;

}

bool Linklist::deleteNode(int data) {

Link *current=first;
Link *previous=current;

while(current=NULL){

    if(current->dData==data){
        if(current==first){
            first=first->next;
        } else {
            previous->next=current->next;
        }
        delete current;
        return true;
    } else {

        previous=current;
        current=current->next;
    }
}
return false;

}

void Linklist::displayList(){

    Link *current=first;
    while(current!=NULL){
        current->displayLink();
        current=current->next;
    }

}




int main()
{

    Linklist lis;
    lis.insertFirst(10);
    lis.insertFirst(20);
    lis.insertFirst(30);
    lis.insertFirst(40);
    lis.insertFirst(50);
    lis.displayList();

    lis.deleteFirst();

    cout<<"====="<<endl;

    lis.displayList();

    cout<<"====="<<endl;

    //cout<<lis.Find(30)<<endl;

    //lis.deleteNode(3);
    //lis.displayList();



    return 0;
}
