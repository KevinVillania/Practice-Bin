#include <iostream>
#include <iomanip>
using namespace std;

class LinkedList2{

    private:
        typedef struct node1{

            float data;
            node1* next;
        } *nodePtr;

        nodePtr head;
        nodePtr curr;
        nodePtr temp;
    public:
        LinkedList2();
        void AddNode(float addData);
        void DeleteNode(float delData);
        void SearchNode(float searchData);
        void PrintList();
};

LinkedList2::LinkedList2(): head(NULL), curr(NULL), temp(NULL){
    //initializes head,curr,temp to null
}

void LinkedList2::AddNode(float addData){

    nodePtr n1 = new node1;

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

void LinkedList2::DeleteNode(float delData){

    nodePtr delPtr = NULL;

    curr = head;
    temp = head;

    while(curr != NULL && curr->data != delData){

        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL){

        cout << delData << " is not in the list. ";
    }else if(curr == head){

        head = head->next;
    }else{

        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
    }

    delete delPtr;
}

void LinkedList2::SearchNode(float searchData){

    curr = head;

    while(curr != NULL && curr->data != searchData){

        curr=curr->next;
    }

    if(curr == NULL){

        cout << searchData << " wala sa list\n";
    }else{

        cout << searchData << " is in node " << curr;
    }
}

void LinkedList2::PrintList(){

    curr = head;

    while(curr != NULL){

        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main(){

    LinkedList2 LL;

    for(int i=0; i<=5; ++i){

        LL.AddNode(3.2*i);
    }

    LL.PrintList();

    LL.DeleteNode(3.2);
    LL.SearchNode(12.8);

    //LL.PrintList();



}













