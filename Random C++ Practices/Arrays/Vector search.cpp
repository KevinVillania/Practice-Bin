//Searching an element in a vector using find()

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//declarations
vector<int> numVector;
int num;

//func prototype
void vectorSearch(vector<int> numVector, int num);

int main(){

    cout << "Enter number of elements: ";
    cin >> num;

    //input element inside vector
    cout << "Vector: ";
    for(int i=0; i<num; ++i){

        numVector.push_back(i*5);
    }

    //prints each elem
    for(int i=0; i<numVector.size(); ++i){

        cout << numVector[i] << " ";
    }

    cout << "\nEnter number to be search: ";
    cin >> num;

    vectorSearch(numVector, num);

}

void vectorSearch(vector<int> numVector, int num){

    vector<int>::iterator it;

    //formula to iterate and compare each element [first, end, num to be search)
    it = find(numVector.begin(),numVector.end(),num);

        if(it != numVector.end()){

            cout << "Number found at index " << it-numVector.begin();
        }else{

            cout << "Number not found";
        }
}
