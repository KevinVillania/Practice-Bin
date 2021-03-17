#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> numVector;
vector<int>::iterator i1;
int num;

int main(){

cout << "Enter number of elements: ";
cin >> num;

cout << "Enter numbers" << endl;
for(int i=0; i<num; ++i){

    int numElem;
    cin >> numElem;
    numVector.push_back(numElem);
}

for(int i=0; i<numVector.size(); ++i){

    cout << numVector[i] << " ";
}

i1 = search(numVector.begin(),numVector.end(),2,10);

}
