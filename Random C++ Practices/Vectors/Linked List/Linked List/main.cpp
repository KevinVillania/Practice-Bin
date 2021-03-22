#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){

// list and iterator declaration
list<int> testList;
list<int>::iterator it;

for(int i=0; i<10 ; ++i){
    testList.push_front(i*5);
}

cout << "Linked list: ";

//print linked list
for(it=testList.begin(); it != testList.end(); ++it){

    cout << *it << " ";
}

//sort linked list in ascending order
testList.sort();

cout << endl;

for(it=testList.begin(); it != testList.end(); ++it){

    cout << *it << " ";
}



}
