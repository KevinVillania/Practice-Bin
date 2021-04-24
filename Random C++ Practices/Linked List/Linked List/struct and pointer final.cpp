#include <iostream>
#include <string>
using namespace std;

struct fruits{

    char fruit[15];
    int price = 0;
    int quantity = 1;

}kevin, humphrey, *ptr;

int main(){


    string input;

    ptr = &kevin; //sets up pointer to address of (kevin) object name

    cout << "Enter fruit name ";
    cin >> ptr->fruit; //uses arrow pointer to access memory
    cout << ptr->fruit; //prints memory address of fruit

    cout << "Enter price ";
    cin >> ptr->price;
    cout << kevin.price;

}

