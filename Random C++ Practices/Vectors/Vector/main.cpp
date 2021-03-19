//General Vector practice
//Iterator
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

    vector<float> vec;
    vector<string> name {"Kevin","Arnel","Villania"};
    vector<float>::iterator i;
    vector<string>::iterator a;

    //inserting float elements inside vector
    for(int i=0; i<10; ++i){

        vec.push_back(i*10.5);
    }

    /*
    //inserting 5 in the first place
    for(i=vec.begin(); i != vec.end(); ++i){
    if(i==vec.begin()+1){

        i=vec.insert(i,5);
    }
    }*/

    //printing using iterators
    for(auto i=vec.rbegin(); i != vec.rend(); ++i){

        cout << *i << " ";
    }

    cout << endl;
    //printing without iterator
    for(int i=0; i<vec.size(); ++i){

        cout << vec[i] << " ";
    }

    cout << endl;


    for(a=name.begin(); a != name.end(); ++a){

        cout << *a << " ";
    }



}
