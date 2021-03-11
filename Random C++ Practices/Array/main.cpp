/*Array and Vector Practice using C++

Sorting,

TO DO: FINDING, INSERTING, DELETING ELEMENTS
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int ageArray[] = {25,21,23,56,32,12,11,23,9,10};
vector<int> ageVector {25,21,23,56,32,12,11,23,9,10};

//function prototype
void display(int a[10]); //prints each element
void display2(vector<int> &arr);

int main(){

cout << "Increasing Order\n";

int num = sizeof(ageArray)/sizeof(ageArray[0]); //gets number of elements in ageArray

sort(ageArray,ageArray+num); //SORTING OF ARRAY
display(ageArray);

cout << endl;

sort(ageVector.begin(),ageVector.end()); //SORTING OF VECTOR
display2(ageVector);


cout << "\n\nDecreasing order\n";

sort(ageArray,ageArray+num, greater<int>()); //sorting array
display(ageArray);

cout << endl;

sort(ageVector.begin(),ageVector.end(),greater<int>()); //sorting vector
display2(ageVector);
}

//prints array
void display(int arr[10]){

    cout << "Array: ";
    for(int i=0; i < 10; ++i){

        cout << arr[i] << " ";
    }
}

//prints vector
void display2(vector<int> &arr){
    cout << "Vector: ";
    for(auto a: arr){

        cout << a << " ";
    }
}


