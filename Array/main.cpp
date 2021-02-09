#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int main(){

int kevinArray[3];
string cars[3] = {"BMW", "Mitsubishi", "Volvo"};
string kevin2 = "Hey yow whats up";

kevinArray[0] = 5;
kevinArray[1] = 4;
kevinArray[2] = 3;
/*
for(int i = 0; i<(sizeof(kevinArray)/sizeof(kevinArray[0])); ++i){

    cout << kevinArray[i] << endl;

}*/

cout << sizeof(cars) << endl;
cout << sizeof(cars[0]) << endl;

int arrSize;
int arrLength;

arrSize = sizeof(kevinArray)/sizeof(kevinArray[0]);
//arrLength = sizeof(kevin) << endl;

cout << kevin2.size() << endl;

cout << "The number of elements inside kevinArray is " << arrSize;



}
