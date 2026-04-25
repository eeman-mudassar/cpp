

// int main(){
// fstream  file("test.txt", ios::app);
// if(!file){
//     cout<<"File not found!"<<endl;
//     return 0;
// }
// file<<"I am appending new line"<<endl;
// file.close();
// return 0;
// }
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream file;
    string line;

    // 1) Read mode se pehle content dekh lo
    file.open("test.txt", ios::in);
    if (file) {
        cout << "File contents before append:\n";
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "didn't find the file.\n";
    }

    // 2) Append
    file.open("test.txt", ios::out | ios::app);
    if (!file) {
        cout << "File could not be opened for appending.\n";
        return 1;
    }
    file << "I am appending new line" << endl;
    file.close();

    return 0;
}
