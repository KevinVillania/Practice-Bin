#include <iostream>
using namespace std;


//generic function adds two number with THE SAME data type
template <class kevin>
kevin addCalculator(kevin x, kevin y){
    return x+y;
}

int main(){

int x=0; int y=0;
int sum;

    cin >> x >> y;

    sum = addCalculator(x,y);

    cout << sum;
}
