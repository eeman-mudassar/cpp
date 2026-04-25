#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Program 1: Reading a file and checking if it opened successfully using is_open()
    
    ifstream inputFile("test.txt");  // Open file in read mode
    
    // Check if file opened successfully using is_open()
    if (inputFile.is_open()) {
        cout << " File opened successfully!\n\n";
        
        string line;
        int lineNumber = 1;
        
        // Read all lines from the file
        while (getline(inputFile, line)) {
            cout << "Line " << lineNumber << ": " << line << endl;
            lineNumber++;
        }
        
        inputFile.close();  // Close the file
        cout << "\n File closed successfully!\n";
        
    } else {
        // If file did not open
        cout << "✗ Error: File 'test.txt' could not be opened!\n";
        cout << "Possible reasons:\n";
        cout << "  1. File does not exist\n";
        cout << "  2. Incorrect file path\n";
        cout << "  3. File does not have read permissions\n";
        return 1;
    }
    
    return 0;
}
