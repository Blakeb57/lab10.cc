/*
*   lab10.cc
*
*   Blake Boehringer
*
*   10-31-19
*
*   Declares an array for the prices and an array for the names of the parts by opening the files and *   load data into the arrays.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;


/*PROTOTYPES*/

double costs(int prices[], const int count);
double parts(string names[], const int count);

int main(int argc, char const *argv[]) {


    const int count = 6;
    int prices[6];
    string names[6];
    ifstream inStream;
    ofstream outStream;
    inStream.open("data1.txt");
    inStream.open("data2.txt");
    outStream.open("output.txt");
    


    for(int i = 0; i < count; i++){

	inStream >> prices[i];
	cout << prices[i] << endl;

    }


    for(int i = 0; i < count; i++){

	inStream >> names[i];
	cout << names[i] << endl;

    }


    cout << names[] << endl;


}


/*double costs(int prices[], const int count){

    for(int i = 0; i < count; i++){

	if(prices[i] == true){

	    cout 








return 0;

}


double parts(string names[], const int count){






return 0;

}

*/

