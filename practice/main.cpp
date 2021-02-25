#include <iostream>
using namespace std;

int main(){

int array1[5] {5,9,2,3,4};
int array2[2][3] {{2,3,4},{3,4,5}};

//prints array1
for(auto a: array1){

    cout << a << " ";
}

//prints multidimensional array
for(int row=0; row<2; ++row){

    for(int column=0; column<3; ++column){

        cout << array2[row][column] << " ";
    }
    cout << endl;
}

//get number of elements of array1
int numElements;

numElements = sizeof(array1)/sizeof(array1[0]);

cout << "Number of elements inside array1 is "<< numElements << endl;

//get number of elements in multidimensional array2
int numElements2;

numElements2 = sizeof(array2)/sizeof(array2[0][0]);
cout << "Number of elements inside array2 is "<< numElements2;



}
