#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Program 2: Writing data to a file and checking if it opened successfully using is_open()
    
    ofstream outputFile("output.txt");  // Open file in write mode
    
    // Check if file opened successfully using is_open()
    if (outputFile.is_open()) {
        cout << " Output file opened successfully!\n\n";
        
        // Write data to the file
        outputFile << "This is a demo file\n";
        outputFile << "We are checking file status using is_open() function\n";
        outputFile << "If the file is open, we can write data to it\n";
        outputFile << "Third line written successfully!\n";
        
        outputFile.close();  // Close the file
        cout << " Data written to file successfully!\n";
        cout << " Check file 'output.txt'!\n";
        
    } else {
        // If file did not open
        cout << "✗ Error: File 'output.txt' could not be opened!\n";
        cout << "Possible reasons:\n";
        cout << "  1. Incorrect directory path\n";
        cout << "  2. Write permission denied\n";
        cout << "  3. Insufficient disk space\n";
        return 1;
    }
    
    cout << "\n--- Second check: Is file still open? ---\n";
    
    // Check if file is still open after close()
    if (outputFile.is_open()) {
        cout << "File is still open\n";
    } else {
        cout << "File has been closed (by close() function)\n";
    }
    
    return 0;
}
