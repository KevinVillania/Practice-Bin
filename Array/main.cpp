#include <iostream>
#include <algorithm>
#include <array>
#include <functional>
using namespace std;

int main(){

int num;
int kevinArray[8] {23,4,32,25,7,54,111,9};

num = sizeof(kevinArray)/sizeof(kevinArray[0]);

sort(kevinArray,kevinArray+num);

for(auto a: kevinArray){

    cout << a << " ";
}

}
