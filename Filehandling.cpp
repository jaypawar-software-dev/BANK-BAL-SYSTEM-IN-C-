#include <iostream>
#include <fstream> // Required header file for File Handling
using namespace std;

int main() {
    // Create an object of ofstream to write data and open the file
    ofstream out_file("test.txt");
    
    // Check if the file opened successfully
    if (out_file.is_open()) {
        out_file << "This is a C++ Practical output file!\n";
        out_file << "File handling implemented successfully.";
        
        out_file.close(); // Always close your files after work is done
        cout << "Data saved successfully! Check 'test.txt' in your project folder." << endl;
    } else {
        cout << "Error: Unable to open file!" << endl;
    }

    return 0;
}