#include <iostream>
#include <algorithm>
using namespace std;

#define ARRAY_SIZE 10

int numArray[10] = {45,23,4,5,6,11,20,19,21,25};
int i,index,num, arrSize;

void numSearch(int arr[], int num);

int main(){

for(auto a: numArray){
    cout << a << " ";
}

cout << "Enter number to be search: ";
cin >> num;

arrSize = sizeof(numArray)/sizeof(numArray[0]);
cout << "Size of " << arrSize << endl;

numSearch(numArray,num);

}

void numSearch(int arr[], int num){

//linear search algorithm
for( i=0; i<arrSize; ++i){
    if(num==numArray[i]){

        cout << "Number is at index: " << i << endl;
        break;
    }
}

if(i == arrSize){

    cout << "Number not found!";
}


}
