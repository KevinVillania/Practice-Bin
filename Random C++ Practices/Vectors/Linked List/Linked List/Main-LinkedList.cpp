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


