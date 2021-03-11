#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int ageArray[] = {25,21,23,56,32,12,11,23,9,10};
vector<int> ageVector {25,21,23,56,32,12,11,23,9,10};

int main(){

cout << "Increasing Order\n";

/*---------------------------------------------*/
//SORTING OF ARRAY
//gets number of elements in ageArray
int num = sizeof(ageArray)/sizeof(ageArray[0]);

//sorts element in increasing order
sort(ageArray,ageArray+num);

cout << "Sorted Array: ";

//prints each element of sorted array
for(auto a: ageArray){

    cout << a << " ";
}

cout << endl;

/*---------------------------------------------*/
//SORTING OF VECTOR
sort(ageVector.begin(),ageVector.end());

cout << "Sorted Vector: ";

for(auto a: ageVector){

    cout << a << " ";
}

}


