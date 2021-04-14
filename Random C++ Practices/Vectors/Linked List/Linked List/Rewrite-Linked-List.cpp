#include <iostream>
using namespace std;

class List{

    private:
        typedef struct node{

            int data;
            node* next;

        }*nodePtr;

        //these are pointers
        nodePtr head;
        nodePtr curr;
        nodePtr temp;

    public:
        List();
        void addNode(int addData);
        void deleteNode(int delData);
        void printList();
};

//constructor
List::List(): head(NULL), curr(NULL), temp(NULL){

}

void List::addNode(int addData){

    nodePtr n1 = new node;

    n1->data = addData;
    n1->next = NULL;

    if(head != NULL){
        //if may laman ang LL
        curr = head;
        //traverses LL

        while(curr->next != NULL){

            curr = curr->next;
        }

        curr->next = n1;

    }else{
        head = n1;
    }
}


void List::deleteNode(int delData){

    nodePtr delPtr = NULL;

    //initializes curr and temp pointers to head
    curr = head;
    temp = head;

    //traverses LL and checks each node for delData;
    while(curr != NULL && curr->data != delData){

        temp=curr;
        curr = curr->next;
    }
    if(curr == NULL){

        cout << delData << " wala sa list\n";
    }else if(curr == head){

        head = head->next;
    }else{

        //node to be deleted is in middle, we need to patch nodes
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
    }

    delete delPtr;
}
