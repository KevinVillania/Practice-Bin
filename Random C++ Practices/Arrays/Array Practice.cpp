#include <iostream>
#include <algorithm>
using namespace std;

#define ARRAY_SIZE 10

int numArray[ARRAY_SIZE] = {45,23,4,5,6,11,20,19,21,25};
int i, num, arrSize;

int numSearch(int arr[], int num);

int main(){

for(auto a: numArray){
    cout << a << " ";
}

cout << "Enter number to be search: ";
cin >> num;

arrSize = sizeof(numArray)/sizeof(numArray[0]);
cout << "Size of array " << arrSize << endl;


cout << "Index = " << numSearch(numArray,num);

}
//linear search algorithm
int numSearch(int arr[], int num){


    for( i=0; i<arrSize; ++i){
        if(num==arr[i]){

            return i;
        }
    }

    if( i == arrSize){

        cout << "Number not found!";
    }
}
