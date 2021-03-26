//Linked list practice sort and printing using iterator
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;


//function proto
void showlist(list<int> testList);
void showlist2(list<int> testList);
void showlist3(list<int> testList);

int main(){

    int beef=5;
    int *pointer;

    pointer = &beef;

    cout << pointer << endl;

// list and iterator declaration
list<int> testList;
list<int>::iterator it;

//input elements into linked list
for(int i=0; i<10 ; ++i){
    testList.push_front(i*5);
}

cout << "Linked list using for loop: ";

//sort linked list in ascending order
testList.sort();

showlist(testList);

cout << endl;
cout << "Linked list using while loop: ";

showlist2(testList);

}

//function to print linked list using for loop
void showlist(list<int> testList){

    list<int>::iterator it;
    for(it=testList.begin(); it != testList.end(); ++it){
        cout << &it << " ";
    }
}

//function to print linked list using while loop
void showlist2(list<int> testList){

    list<int>::iterator it = testList.begin();
    while(it != testList.end()){
        cout << &it << " ";
        ++it;
    }
}


