#include <iostream>
#include <string>
using namespace std;

//a structure groups different types of data,
//and can be accessed using an object declaration

struct car{

    int purchaseYear;
    int price;
    string brand;

}arnel, humphrey;

//function proto
void print(car local);

int main(){

    string input;
    getline(cin, input);
    cout << input;

    cout << "Enter car brand ";
    getline(cin,arnel.brand);

    cout << "Enter car price ";
    cin >> arnel.price;

    cout << "Enter purchase year ";
    cin >> arnel.purchaseYear;

    print(arnel);
}

void print(car local){

    cout << local.brand << " " << local.price << " " << local.purchaseYear;

}
