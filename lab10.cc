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


/* MAIN FUNCTION */
int main(int argc, char const *argv[]) {

    const int count = 6;
    float prices[6];
    string names[6];

    ifstream inStream;                  // this part of the main function takes the data1.txt file and puts it into the float prices array
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

    ifstream inStream1;                // this part of the main function takes the data2.txt file and puts it into the string names array
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


    cout << "The " << names[0] << " is the cheapest part that costs $" << lowcosts(prices, count) << "0" << endl;                   // these two couts output the most expensive item with its price along with the cheapest item with its price
    cout << "The " << names[2] <<" is the most expensive part that costs $" << highcosts(prices, count) << ".00" << endl;           // uses the element in the array names that matches the lowest and highest price

}


double lowcosts(float prices[], const int count){               // this function finds the lowest price in the prices array

    double low = 1000;

    for(int i = 0; i < count; i++){

	    if(prices[i] < low){
            low = prices[i];

        }

    }
    return low;

}


double highcosts(float prices[], const int count){          // this function finds the highest price in the prices array

    double high = -1000;

    for(int i = 0; i < count; i++){

	    if(prices[i] > high){
            high = prices[i];

        }

    }
    return high;

}