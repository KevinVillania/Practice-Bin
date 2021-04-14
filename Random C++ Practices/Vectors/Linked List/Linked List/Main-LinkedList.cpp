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
        void AddNode(int addData);
        void DeleteNode(int delData);
        void PrintList();

};

//constructor ::scope resolution operator
List::List(): head(NULL), curr(NULL), temp(NULL)
{

    //initialize head,curr,temp to NULL value
}

//add new nodes to the list
void List::AddNode(int addData){

    //memory allocation using 'new' // nodePtr is a typedef pointer initialize at struct
    //creates new node 'n', node is a struct
    nodePtr n = new node;

    n->next = NULL;
    n->data = addData;

    //if yung head natin is may laman hindi siya NULL then yun yung current natin
    if(head != NULL){

        curr = head;
        //curr, head, next are pointers
        //gusto natin mag traverse papunta sa dulo ng list
        while(curr->next != NULL){

            curr = curr->next;
        }
        //when curr is at the end of the list (equals NULL)
        curr->next = n;

    }else{

        //kapag walang laman yung list
        head = n;
    }
}

//Delete Node
void List::DeleteNode(int delData){

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

//prints linked list
void List::printList(){

    //initializes curr pointer to the head of LL
    curr = head;

    //traverses curr pointer up to the tail of LL which is set to NULL
    while(curr != NULL){

        cout << curr ->data << " " << curr << " " << curr->next << endl;
        curr = curr->next; //points curr to curr->next
    }
}

int main(){

    List kevin;

    kevin.addNode(3);
    kevin.addNode(5);
    kevin.addNode(7);

    kevin.printList();

}



