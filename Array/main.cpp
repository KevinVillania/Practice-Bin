#include <iostream>
using namespace std;

//function prototype
int passbyValue(int x);
int passbyReference(int *x);

int main(){

    int kevinAge = 23;
    int humphreyAge = 20;

    passbyReference(&humphreyAge);
    passbyValue(kevinAge);

    cout << kevinAge << endl; // prints 23
    cout << humphreyAge << endl; //prints 11

}

int passbyValue(int x){
    //prints 23
        x = 99;
}

int passbyReference(int *x){
        *x = 11;
}
