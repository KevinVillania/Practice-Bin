/*Conversion unit program*/
//from meters to different unit

#include <iostream>
#include <string>

using namespace std;

int SwitchCase();
double MeterConverter(double meter, int numberSelect);
double EnterNumberMeter();
bool ComputeAgain();
string ReturnUnit(int numberSelect);

int main(){


    bool rerunProgram = true;

    //default conversion is from "meter" scale
    do{

        double meter = EnterNumberMeter();
        int numberSelect = SwitchCase();

        string unit = ReturnUnit(numberSelect);

        //converting function
        double convertedNumber = MeterConverter(meter, numberSelect);

        cout << meter << " meter is equal to " << convertedNumber;

        //returns a bool that asks the user if he wants to run the program again
        rerunProgram = ComputeAgain();

    }while(rerunProgram);


    cout << "Out of loop";
}

//Asks the user which unit to convert to.
int SwitchCase(){

    int choice = 0;

    cout << "Convert to\n";

    cout << "[1]----millimeter (mm)\n";
    cout << "[2]----centimeter (cm)\n";
    cout << "[3]----kilometer  (km)\n";
    cout << "[4]----inches     (in)\n";
    cout << "[5]----feet       (ft)\n";
    cout << "[6]----yard       (yd)\n";
    cout << "[7]----mile       (mi)\n";

    cout << "Select Conversion: ";
    cin >> choice;

    return choice;
}

//returns converted number
double MeterConverter(double meter, int numberSelect){

    switch(numberSelect){

        case 1: //mm
            return meter * 1000;
            break;
        case 2: //cm
            return meter * 100;
            break;
        case 3: //km
            return meter / 1000;
            break;
        case 4: //in
            return meter * 39.3701D;
            break;
        case 5: //ft
            return meter * 3.28084;
            break;
        case 6: //yd
            return meter * 1.09361;
            break;
        case 7: //mi
            return meter * 0.000621371;
            break;
        default:
            return meter;
            break;
    }
}

//asks the user to enter a number
double EnterNumberMeter(){

    double meter = 1;
    cout << "Enter number to convert(in meters): ";
    cin >> meter;

    return meter;
}

//bool function to ask the user if he wants to compute again
bool ComputeAgain(){

    cout << endl << "Compute Again Y/N?" << endl;
    char answer;

    cin >> answer;

    if(answer == 'Y' || answer == 'y'){

        return true;
    }else{

        return false;
    }
}

//returns a string that serves as the unit
string ReturnUnit(int numberSelect){

    switch(numberSelect){

            case 1: //mm
                return "millimter";
                break;
            case 2: //cm
                return "centimeter";
                break;
            case 3: //km
                return "kilometer";
                break;
            case 4: //in
                return "inches";
                break;
            case 5: //ft
                return "feet";
                break;
            case 6: //yd
                return "yard";
                break;
            case 7: //mi
                return "miles";
                break;
            default:
                return "meter";
                break;
        }
}
