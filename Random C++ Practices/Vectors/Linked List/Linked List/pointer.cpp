#include <iostream>
using namespace std;

//Func proto
void passValue(int x);
void passReference(float *x);


int main(){

    int num1 = 55;
    float num2 = 55.1;

    //Pointer point to the address of a variable using the & (address operator)
    int *num1Pointer = &num1;
    float *num2Pointer = &num2;

    //cout << sizeof(num1) << endl;

    //num2Pointer = &num2;

    //prints out memory address
    cout << num1Pointer << endl << num2Pointer << endl;

    passValue(num1);
    passReference(&num2);

    //prints out values
    cout << "num1 is still " << num1 << endl;
    cout << "num2 is now " << num2;
}

//functions
void passValue(int x){
    x = 99;
}

void passReference(float *x){
    *x = 99;
}
