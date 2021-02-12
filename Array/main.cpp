#include <iostream>
using namespace std;

int main(){

int *thisPointer;
char *anotherPointer;
double *doublePointer;
float *floatPointer;

int a = 5;
char x = 'x';
double d = 25;
float f = 19.67;

thisPointer = &a;
cout << "Int " <<thisPointer << "\n";

anotherPointer = &x;
cout << "Char " << anotherPointer << "\n";

doublePointer = &d;
cout << "Double " << doublePointer << "\n";

floatPointer = &f;
cout << "float " << *floatPointer << "\n";


}
