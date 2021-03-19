//swap two vector
#include <iostream>
#include <vector>
using namespace std;

vector<int> num1 {1,3,5,7};
vector<int> num2 {2,4,6,8};
int num = 4;

int main(){

    num1.swap(num2);

    cout << "Vector 1: ";
    for(auto a: num1){

        cout << a << " ";
    }
    cout << endl;

    cout << "Vector 2: ";
    for(auto a: num2){

        cout << a << " ";
    }

    cout << endl;

    //Search algorithm
    for(int i=0; i<num1.size(); ++i){

        if(num==num1[i]){
            cout << "number is at index " << i << endl;
        }
    }

    //replacing an element by erase and insert method
    num2.erase(num2.begin()+1);
    num2.insert(num2.begin(),3);

    cout << "New vector 2: ";
    for(auto a: num2){

        cout << a << " ";
    }
}
