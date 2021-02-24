#include <iostream>
#include <cmath>

using namespace std;

float volumeCircle(float radius);
float areaCircle(float radius);
void passbyReference(int *x);

int main(){

    int radius;

    cout << "Area of Circle" << endl;
    cout << "Enter radius: ";

    cin >> radius;

    cout << "Area of circle is equal to " << areaCircle(radius) << endl;
    cout << "Volume of sphere is equal to " << floor(volumeCircle(radius)) << endl;
    cout << asin(sqrt(2)/2) << endl;

    passbyReference(&radius);

    cout << radius;


}

float areaCircle(float radius){

    float area;

    area = M_PI * pow(radius,2);
    return area;

}

float volumeCircle(float radius){

    float volume;

    volume = (4*M_PI * pow(radius,3)) / 3;
    return volume;

}

void passbyReference(int *x){

    *x = 11;
}
