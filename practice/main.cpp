#include <iostream>

using namespace std;

class Enemy{
    public:
        virtual void attack(){};
        //virtual function when called checks functions in derived classes
};

class Ninja: public Enemy{

public:
    void attack(){

        cout << "Shurikennn tosss!!" << endl;
    }
};

class Monster: public Enemy{

    public:
        void attack(){

            cout << "Rawr rawr" << endl;
        }
};

int main(){

    //Creating an object for Ninja/monster class
    Ninja n;
    Monster m;

    //creating a pointer for ninja and monster class
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->attack();
    enemy2->attack();


}
