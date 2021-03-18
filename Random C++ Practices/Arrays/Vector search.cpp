//Searching an element in a vector using find()
//STUDY ITERATOR IT
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//var and vector declarations
vector<int> numVector;
int num;

int main(){

cout << "Enter number of elements: ";
cin >> num;

//puts element inside vector
cout << "Enter numbers" << endl;
for(int i=0; i<num; ++i){

    numVector.push_back(i*5);
}

//prints each elem
for(int i=0; i<numVector.size(); ++i){

    cout << numVector[i] << " ";
}

cout << "Enter number to be search: ";
cin >> num;

vector<int>::iterator it;

//formula to iterate and compare each element
it = find(numVector.begin(),numVector.end(),num);
if(it != numVector.end()){

    cout << "Number found";
}else{

    cout << "Number not found";
}
}
