#include <iostream>
#include <string>
using namespace std;

class LinkedList{
    private:
        typedef struct node{
            string data;
            node* next;
        }*nodePtr;

        nodePtr head;
        nodePtr curr;
        nodePtr temp;

    public:
        LinkedList();
        void AddNode(string addData);
        void DeleteNode(string deleteData);
        void SearchNode(string SearchNode);
        void PrintList();
};

LinkedList::LinkedList(): head(NULL), curr(NULL), temp(NULL){
    //initializes pointers to null
}

//create and adds new node at the end of LL
void LinkedList::AddNode(string addData){

    nodePtr n1 = new node;

    n1->data = addData;
    n1->next = NULL;

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

//deletes a node
void LinkedList::DeleteNode(string deleteData){

    nodePtr delPtr = NULL;

    curr = head;
    temp = head;

    while(curr->next != NULL && curr->data != deleteData){

        temp = curr;
        curr = curr->next;
    }

    if(curr == NULL){

        cout << deleteData << " wala sa linked list\n ";
    }else if(curr == head){

        head = head->next;
    }else{

        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
    }

    delete delPtr;
}

//search for data in LL
void LinkedList2::SearchNode(string searchData){

    //initializes curr pointer to head of LL
    curr = head;

    //traverses thru LL while checking for the desired data
    while(curr != NULL && curr->data != searchData){

        //points curr to next node
        curr=curr->next;
    }

    //checks if curr is at the end of LL which points to NULL
    if(curr == NULL){

        cout << searchData << " wala sa list\n";
    }else{

        //element is within the LL and prints out its memory address
        cout << searchData << " is in node " << curr;
    }
}

void LinkedList::PrintList(){

    curr = head;

    while(curr != NULL){

        cout << curr->data << " ";
        curr = curr->next; // traverses linsked list to next node;
    }

}

int main(){

    LinkedList LL;

    LL.AddNode("Kevin");
    LL.AddNode("Humphrey");
    LL.AddNode("Arnel");
    LL.AddNode("Aida");
    LL.AddNode("Oreo");

    //LL.DeleteNode("Kevin");
    LL.PrintList();
}















