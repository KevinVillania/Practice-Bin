/*
Number Pattern
1
4 6
9 11 13
17 19 21 23
*/
#include <iostream>
using namespace std;

int main(){

    int inc=3;
    int init=1; //4,9,17
    for(int i=0; i<=3; i++){
        int temp=init;
        for(int j=0; j<=i; j++){
            cout << temp << " ";
            temp+=2;

            //cout << "test";
        }
        //cout << temp << "*";
        cout << "\n";
        init+=inc; //determines next value of temp
        inc=inc*2-(i+1); //determines next next value to add on init (5,8,13
    }
    return 0;
}
