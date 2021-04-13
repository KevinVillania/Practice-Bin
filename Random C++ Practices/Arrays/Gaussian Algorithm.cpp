//refactor code for gauss algorithm
#include <iostream>
using namespace std;

void linearSum(int arr[]);

int main(){

    long long number=100000LL; //1M
    int arr[number];
    long long sum;

    for(int i=1; i<=number; i++){

        arr[i] = i;
    }


    for(int i=1; i<=number; i++){

        cout << arr[i] << " ";
    }

    cout << endl << arr[1] << " " << arr[number];

//Gauss algorithm to sum series
/*    int numElements = (sizeof(arr)/sizeof(arr[0]))/2;
    cout << " elements " << numElements << " ";
    cout << (arr[1]+arr[10000]) * numElements;
*/

//linear summing method
    for(int i=1; i<=number; i++){

        sum += arr[i];
    }

    cout << " " << sum;


}

