#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main(){

int num;
int laki;
int kevinArray[8] {23,4,32,25,7,54,111,9};

//laki = kevinArray.size();

num = sizeof(kevinArray)/sizeof(kevinArray[0]);

sort(kevinArray,kevinArray+num, less<int>());

for(auto a: kevinArray){

    cout << a << " ";
}

}
