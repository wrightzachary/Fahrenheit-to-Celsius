/* 
    Zachary Wright
*/


#include<iostream>
#include<string>
#include<fstream>
#include<cmath>

using namespace std;

int main() {
    //Variables for city name and temperature
    string cityName;
    int fahrenheit, celcius;

    //Creates a file object to read from a file
    ifstream inFile;
    //Opening "FahrenheitTemperature.txt' using input file object
    inFile.open("FahrenheitTemperature.txt");

    //Creates a file object to write to a file
    ofstream outFile;
    //Opens file "CelsiusTemperature.txt' using the output file object
    //Creates file if the file is nonexistent
    outFile.open("CelsiusTemperature.txt");

    //Checks if input file can be opened
    if (!inFile) {
        cout << "File cannot be opened." << endl;
    }
    else {
        //Loops till end of file
        //Reads city name and temperature in every line in the file
        while (inFile >> cityName >> fahrenheit) {
            //Converts fahrenheit to celcius 
            celcius = (int)round(((fahrenheit - 32) * 5) / (double)9);
            //Writes city name and celcius temperature to CelsiusTemperature.txt
            outFile << cityName << " " << celcius << endl;
        }
    }

    //Closes file objects
    inFile.close();
    outFile.close();

    return 0;
}