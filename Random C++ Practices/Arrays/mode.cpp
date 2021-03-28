//old code for finding mode of an array

#include <iostream>
using namespace std;

void modeCalc(int arr[], int numElem){

    int counter =1;
    int max=0;
    int mode=arr[0];

    for(int i=0; i < numElem-1; i++){

        if(arr[i] == arr[i+1]){

            counter++;
            if(counter>max){

                max=counter;
                mode = arr[i];
            }
        }else{
            counter = 1; //resets counter
        }
    }
    cout << "mode is " << mode;
}

int main(){

int arr[] { 1, 4, 11, 2, 9, 1, 2, 5, 3, 6, 5, 4, 1, 1, 1, 1 };
modeCalc(arr,10);

}
