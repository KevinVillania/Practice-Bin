//Linked list practice sort and printing using iterator
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;


//function proto
void printFor(list<int> testList);
void printWhile(list<int> testList);

int main(){

    int beef=5;
    int *pointer;

    pointer = &beef;

    //cout << pointer << endl;

    // list and iterator declaration
    list<int> testList;
    list<int>::iterator it;

    //input elements into linked list
    for(int i=0; i<10 ; ++i){
        testList.push_front(i*5);
    }

    //cout << testList.size();

    //sort linked list in ascending order
    testList.sort();

    cout << "Linked list using for loop: ";
    printFor(testList);

    cout << "Linked list using while loop: ";
    printWhile(testList);
}

//function to print linked list using for loop
void printFor(list<int> testList){

    //list<int>::iterator it;
    for( auto it=testList.begin(); it != testList.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}

//function to print linked list using while loop
void printWhile(list<int> testList){

    list<int>::iterator it = testList.begin();
    while(it != testList.end()){
        cout << *it << " ";
        ++it;
    }
    cout << endl;
}




