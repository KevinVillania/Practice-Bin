#include <iostream>
using namespace std;

int main(){

    int num1 = 2;
    int num2 = 4;

    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;

    int temp;

    /*temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;*/

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    ptr1 = &num2;
    ptr2 = &num1;

    cout << *ptr1 << "\n" << *ptr2;





}
