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

double lowcosts(float prices[], const int count);
double highcosts(float prices[], const int count);


int main(int argc, char const *argv[]) {

    const int count = 6;
    float prices[6];
    string names[6];
    ifstream inStream;
    ofstream outStream;
    inStream.open("data1.txt");
    outStream.open("output.txt");
    

    if(inStream.fail() || outStream.fail()){

        cout << "-There is an error opening the input or output of the file." << endl;
        exit(0);
    }


    for(int i = 0; i < count; i++){

	    inStream >> prices[i];

    }

    ifstream inStream1;
    ofstream outStream1;
    inStream1.open("data2.txt"); 
    outStream1.open("output.txt");

    if(inStream1.fail() || outStream1.fail()){

        cout << "-There is an error opening the input or output of the file." << endl;
        exit(0);
    }

    for(int i = 0; i < count; i++){

	    inStream1 >> names[i];

    }


    cout << names[0] << " is the cheapest price $" << lowcosts(prices, count) << "0" << endl;
    cout << names[2] <<" is the most expensive price $" << highcosts(prices, count) << ".00" << endl;

}


double lowcosts(float prices[], const int count){

    double low = 1000;

    for(int i = 0; i < count; i++){

	    if(prices[i] < low){
            low = prices[i];

        }

    }
    return low;

}


double highcosts(float prices[], const int count){

    double high = -1000;

    for(int i = 0; i < count; i++){

	    if(prices[i] > high){
            high = prices[i];

        }

    }
    return high;

}