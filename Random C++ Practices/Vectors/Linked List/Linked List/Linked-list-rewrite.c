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
        nodePtr next;

    public:
        //functions
        List();
        void AddData(int addData);
        void DeleteData(int delData);
        void PrintList();
};

void List::AddData(int addData){

    nodePtr n = new node;

    n->next = NULL;
    n->head = addData;

    if(head != NULL){

        curr = head;

        while(curr->next != NULL){

            curr = curr->next;
        }
        curr->data = n;
    }else{
        head = n;
    }
}

int main(){
}
