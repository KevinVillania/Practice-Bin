#include <iostream>
#include <string>
#include <vector>
using namespace std;

//var declarations
char encryptedMessage;
int numShift = 1;
int alphabetNumber;
int numberElements,select;

//Array for reference
char alphabet[60] ={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
vector<char> passby;
vector<int> position;


int main(){

string code ="WOOE WEI RIUIOEUROIJ WAEIQRI QIERIUOQ MOIERIOI IOWERQI OCFIOWEUIROIUWREOIIU AFK";
int numChar;//number of element in a string

numChar = code.length()-8;
cout << code << "\nNumber of characters: " << numChar <<endl;

cout << "28 = KWNWF LZAJLQ KWNWF HGKL EWJAVAWE\n25 = HTSSJHYNTS JXYFGQNXMJI!........NR NS\n38 = CNBC VRL CNBC VRLC XWN CFX XWN CFX XWN CFX CQANN\n\n";

cout << "Enter number of elements ";
cin >> numberElements;

//adds each element to vector passby
for(int i=0; i<numberElements; ++i){

    cin >> encryptedMessage;
    passby.push_back(encryptedMessage);
}

//prints vector passby
for(int i=0; i<passby.size(); ++i){

    cout << passby[i] << " ";
}
cout << endl;

//to get position in alphabet
for(int i=0; i<passby.size(); ++i){

    int pos = passby[i] - 64;

    position.push_back(pos);
}

//PRINTS VECTOR POSITION
for(int i=0; i<position.size(); ++i){

    cout << position[i] << " ";
}

cout << endl;

cout << "SELECT ALGORITHM: 1=KWNWF.... 2=HTSSJHYNTS... 3=CNBC....";
cin >> select;

switch(select){

    case 1:
            for(numShift = 1; numShift <= 26; ++numShift){

            int i=0;

                //KWNWF
                cout << alphabet[position[i]+numShift] << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                //LZAJLQ
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                //KWNWF
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                 //HGKL
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                //EWJAVAWE
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                cout << endl;
        }
        break;

    case 2:
        for(numShift = 1; numShift <= 26; ++numShift){

            int i=0;

                //HTSSJHYNTS 10
                cout << alphabet[position[i]+numShift] << alphabet[position[++i]+numShift]  << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << " ";

                //JXYFGQNXMJI
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift]  << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                //NR
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                 //NS
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                cout << endl;
        }
        break;

    case 3:
        for(numShift = 1; numShift <= 26; ++numShift){

            int i=0;

                //CNBC
                cout << alphabet[position[i]+numShift] << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                //VRL
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                //CNBC
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                //VRLC
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                //XWN
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                //CFX
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                //XWN
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                 //CFX
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                //XWN
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                //CFX
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                //CQANN
                cout << alphabet[position[i]+numShift] << alphabet[position[++i]+numShift];
                cout << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << alphabet[position[++i]+numShift] << " ";

                cout << endl;
        }
        break;

}
}


