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

int arr[10] {1,1,1,20,20,30,40,50,60,10};
modeCalc(arr,10);

}
