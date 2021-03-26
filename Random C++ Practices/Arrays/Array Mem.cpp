#include <iostream>
using namespace std;

//func prototype
int printMem(int numArray[], int numElements);
int printMem2(int numArray[], int numElements);

int main(){

    int numArray[5] {1,2,3,4,5};
    int numElements;

    numElements = sizeof(numArray)/sizeof(numArray[0]);

    //for loop to print mem address of each element
    for(int i=0; i<numElements; ++i){

        cout << &numArray[i] << " ";
    }

    cout << endl;
    printMem(numArray, numElements);
    printMem2(numArray, numElements);
    printMem(numArray, numElements);
    printMem2(numArray, numElements);
}

//function to print array elements
int printMem(int numArray[], int numElements){


    //for loop to print mem address of each element
    for(int i=0; i<numElements; ++i){

        cout << numArray[i] << " ";
    }
}

//function to print array memory address
int printMem2(int numArray[], int numElements){

    //for loop to print mem address of each element
    for(int i=0; i<numElements; ++i){

        cout << &numArray[i] << " ";
    }

    numArray[4] = 26;
}
