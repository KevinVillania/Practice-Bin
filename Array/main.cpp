#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int main(){

int kevinArray[3];
string cars[5] = {"BMW", "Mitsubishi", "Volvo"};
int kevin = 5;

kevinArray[0] = 5;
kevinArray[1] = 4;
kevinArray[2] = 3;

for(int i = 0; i<(sizeof(kevinArray)/sizeof(kevinArray[0])); ++i){

    cout << kevinArray[i] << endl;

}

cout << sizeof(kevinArray) << endl;
cout << sizeof(kevinArray[0]) << endl;

int arrSize;

arrSize = sizeof(kevinArray)/sizeof(kevinArray[0]);
int arrLength;

arrLength = sizeof(kevin);

cout << cars.size();

cout << "The number of elements inside kevinArray is " << arrSize;



}
