#include <iostream>
#include <cmath>

using namespace std;

float volumeCircle(float radius);
float areaCircle(float radius);

int main(){

    float radius;

    cout << "Area of Circle" << endl;
    cout << "Enter radius: ";

    cin >> radius;

    cout << "Area of circle is equal to " << areaCircle(radius) << endl;
    cout << "Volume of sphere is equal to " << volumeCircle(radius) << endl;


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
