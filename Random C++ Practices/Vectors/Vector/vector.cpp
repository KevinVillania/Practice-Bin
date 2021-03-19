//PROGRAM TO INSERT AND ERASE NUMBER
#include <iostream>
#include <vector>
using namespace std;

//var and iterator declaration
vector<int> numVec;
vector<int>::iterator it;

int main(){

    //fills vector with multiples of 5
    for(int i=0; i<=10; ++i){

        numVec.push_back(i*5);
    }

    //asks the user to insert number at a specified index
    int place,num;

    cout << "Number to be inserted: ";
    cin >> num;
    cout << "Insert number at: ";
    cin >> place;

    //insert function
    numVec.insert(numVec.begin()+place-1,num);

    cout << "Vector: ";
    for(auto a: numVec){
        cout << a << " ";
    }

    //asks the user to erase a number
    cout << "Index of number to erase: ";
    cin >> place;
    numVec.erase(numVec.begin() + place-1);

    cout << "New Vector: ";
    for(auto a: numVec){
        cout << a << " ";
    }




}
