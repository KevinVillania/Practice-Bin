#include <iostream>
#include <time.h>
#include "BinaryTree.h"
using namespace std;

int main()
{

    int treeArray[10] = {};
    BinaryTree BT;

    srand(time(NULL));
    //inputs array w/ random number up to 100
    for(int i=0; i<=10; ++i){

        treeArray[i] = rand() % 100;
    }

    //normal array printing
    for(auto a: treeArray){
        cout << a << " ";
    }

    cout << endl;

    //inputs array elements to BT
    for(int i=0; i<10; i++){

        BT.AddLeaf(treeArray[i]);
    }

    //prints Binary search tree (in-order format)
    BT.PrintInOrder();

    //cout << "test";
}
