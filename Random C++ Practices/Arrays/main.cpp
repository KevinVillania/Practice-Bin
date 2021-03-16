/*Array practice in C++ and
solving mean, median, mode of an array
*/

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

int numArray[10];
int numElem;
//get mean median mode
float mean,mode,total,median;
int median1,median2;

//func prototype
void modeCalc(int arr[], int numElem);
void meanCalc(int arr[], int numElem);
void medianCalc(int arr[], int numElem);
void numInput(int numElem);

int main(){

//User input
cout << "Enter number of elements ";
cin >> numElem;
numInput(numElem);

//sorts array in ascending/descending order
sort(numArray,numArray+numElem);
//sort(numArray,numArray+numElem, greater<int>());

for(int i=0; i<numElem; ++i){

    cout << numArray[i] << " ";
    total += numArray[i];
}

cout << endl;

//func call to solve mean,med,mode;
meanCalc(numArray,numElem);
medianCalc(numArray,numElem);
modeCalc(numArray,numElem);
cout << endl;
}

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
    cout << "\nMode: " << mode;
}

void meanCalc(int arr[], int numElem){

mean = total/numElem;
cout << "\nMean: " << setprecision(4) << mean;
}

void medianCalc(int arr[], int numElem){

    if(numElem % 2 == 0){

    //median
    median1 = numElem/2;
    //median2 = median1+1;

    cout << endl << numArray[median1] << " " << numArray[median1-1] << endl;

    median = (numArray[median1]+numArray[median1-1])/2;
    cout << "\nMedian: "<< median;
    }else{

    median1 = ceil(numElem/2);
    cout << "\nMedian: " << numArray[median1];
    }

}

void numInput(int numElem){

    for(int i=0; i<numElem; ++i){

        int num;
        cin >> num;
        numArray[i]=num;
    }
}
