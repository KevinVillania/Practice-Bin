//General Vector practice
//Iterator
#include <iostream>
#include <vector>
#include <string>
using namespace std;


//declaration
vector<float> vec;
vector<string> name {"Kevin","Arnel","Villania"};

//iterator
vector<float>::iterator i;
vector<string>::iterator a;

//func proto
void inputElem();
void print(vector<float> vec);

int main(){

    //input function
    inputElem();

    //inserting 69 in the first place
    vec.insert(vec.begin()+3,69);
    vec.erase(vec.begin()+3)

    //printing using iterators
    print(vec);

    //printing without iterator
    for(int i=0; i<vec.size(); ++i){

        cout << vec[i] << " ";
    }

    cout << endl;

    for(a=name.begin(); a != name.end(); ++a){

        cout << *a << " ";
    }
}

void inputElem(){

    //inserting float elements inside vector
    for(int i=0; i<10; ++i){

        vec.push_back(i*10.5);
    }
}

void print(vector<float> vec){

    for(auto i=vec.rbegin(); i != vec.rend(); ++i){

        cout << *i << " ";
    }
    cout << endl;
}

