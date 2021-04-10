#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
using namespace std;

//funct proto
void print(vector<int> myVector);

int main(){

    //declarations
    vector<int> myVector;
    int numberElements;

    cout << "Enter number of elements: ";
    cin >> numberElements;

    //use current time as seed for random generator
    srand(time(0));

    //input elements inside vector
    for(int i=1; i <= numberElements; i++){

        myVector.push_back(rand() % 100);
    }

    cout << "Random order: ";
    print(myVector);

    sort(myVector.begin(), myVector.end());

    cout << "Increasing order: ";
    print(myVector);

    sort(myVector.begin(), myVector.end(), greater<int>());
    cout << "Decreasing order: ";
    print(myVector);

    //Inserting value on specified place
    int place, value;

    cout << "Enter place: ";
    cin >> place;
    cout << "Enter value: ";
    cin >> value;

    myVector.insert(myVector.begin()+place, value);
    print(myVector);

    //Deleting value on specified place
    cout << "Enter place: ";
    cin >> place;

    myVector.erase(myVector.begin()+place);
    print(myVector);

    //Find a number and return position
    int numSearch;

    cout << "Enter number to be search: ";
    cin >> numSearch;

    vector<int>::iterator it = myVector.begin();
    it = find(myVector.begin(), myVector.end(), numSearch);
    if(it != myVector.end()){

        cout << numSearch << " found at index " << it-myVector.begin();
    }else{

        cout << numSearch << " not found.";
    }

}

void print(vector<int> myVector){

    //iterator declaration
    vector<int>::iterator it = myVector.begin();

    for(it; it != myVector.end(); ++it){

        cout << *it << " ";
    }

    cout << endl << endl;
}

