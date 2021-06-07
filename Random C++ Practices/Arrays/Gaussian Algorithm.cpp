//refactor code for gauss algorithm
#include <iostream>
using namespace std;

//#define UINT_MAX sum = 0;

int main(){

    int number = 1000000;
    long long int arr[number];
    long long int sum = 0L;

    //inputs number series 1 up to number;
    for(int i=0; i<=number; i++){

        arr[i] = i+1;
    }
/*
    for(auto a: arr){

        cout << arr[i] << " ";
    }

    cout << endl << "Start: " <<arr[0] << " " << "End: " << arr[number-1];
*/
    //Gauss algorithm to sum series
    int multiplier = number/2; //number of elements inside array divided by 2

    //cout << "\nmultiplier " << multiplier << endl;
    cout << arr[0] << " " << arr[number-1] << endl;

    if(multiplier % 2 == 0){

        sum = (arr[0]+arr[number-1]) * multiplier;

        cout << sum;
    }else{

        multiplier = (number-1)/2;

        sum = ((arr[0]+arr[number-2]) * multiplier) + arr[number-1];
        /*
        gets the first and second to the last array element
        then multiplied by half of number of elements then
        added by the last element of array
        */
        cout << sum;
    }


/*
    //linear summing method
    //long long int sum = 0L;

    for(auto a: arr){

        sum += a;
    }

    cout << sum;
*/
}

