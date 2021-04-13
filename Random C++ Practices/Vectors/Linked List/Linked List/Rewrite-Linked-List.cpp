#include <iostream>
using namespace std;

class List{

    private:
        typedef struct node{

            int data;
            node* next;

        }*nodePtr;

        nodePtr head;
        nodePtr curr;
        nodePtr temp;

    public:
        List();
        void AddData(int addData);
        void DeleteData(int delData);
        void PrintList();
};

List::List(): head(NULL), curr(NULL), temp(NULL){

}

void List::AddData(int addData){

    nodePtr n1 = new node;

    n1->next = NULL;
    n1->data = addData;

    if(head != NULL){

        curr = head;

        while(curr->next != NULL){

            curr = curr->next;
        }

        curr->next = n1;
    }else{

        head = n1;
    }
}


void List::DeleteData(int delData){

    //initializes a pointer name 'delPointer' that points to NULL
    nodePtr delPointer = NULL;

    //initializes temp and curr to head
    temp = head;
    curr = head;

    //Traverses thru the linked list(LL), while-loop executes if curr pointer
    //is not at the end of the LL and delData is not yet found
    //If one condition is met, while-loop exits;
    while(curr != NULL && curr->data != delData){

        //traverses LL by moving temp and curr pointer using next pointer
        //We need to track to pointer to let patching up deleted node in
        //the middle of the list
        temp = curr;
        curr = curr->next;
    }

    //We want to check the values of curr
    if(curr == NULL){

        cout << delData << " wala sa list\n";
    }else if(curr == head){

        head = head->next;
    }else{

        //if we need to delete a node in the middle of the LL
        // we need to patch things up
        //so the curr pointer is now pointed to curr->next
        //and the temp->next now points to the curr;
        delPointer = curr;
        curr = curr->next;
        temp->next = curr;
    }

    delete delPointer;
}

int main(){
}

