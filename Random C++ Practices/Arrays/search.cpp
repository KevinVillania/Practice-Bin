//Simple array linear search algorithm
#include <iostream>
#include <array>
using namespace std;


//func prototype linear search
void simpleSearch(int arr[], int arrSize, int num);

int main(){

    int num;

    cout << "Enter number of elements: ";
    cin >> num;

    //array declaration and initialization
    int arr[num] {};

    //insert elements inside array
    for(int i=0; i<num; i++){

        arr[i]=i*4;
    }

    //print array
    for(int i=0; i<num; i++){

        cout << arr[i] << " ";
    }

    int numSearch;
    cout << "\nEnter number to be search: ";
    cin >> numSearch;

    //array size
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    simpleSearch(arr, arrSize, numSearch); //func call

}

void simpleSearch(int arr[], int arrSize, int num){

    int numDecider = 0, position;

    //linear search
    for(int i=0; i < arrSize; ++i){

        if(num == arr[i]){

            numDecider = 1;
            position = i+1;
            break;
        }
    }

    if(numDecider>0){

        cout << "Element found at position " << position;
    }else{

        cout << "Element not found";
    }

}
