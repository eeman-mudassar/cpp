#include <iostream>
#include <string>
#include <fstream>   //library for file handling
using namespace std;
   
// int main(){
//     ofstream fout("test.txt"); //class:ofstream, object:fout, file name:test.txt
//     //ofstream :write into existing file in overwritten mode, or if file does not exist, create new file and open it.
//     fout<<"hello User,this is my oop file handling program ."<<endl;
//     fout.close();
//     return 0;
// }
int main()
{
    ifstream fin("test.txt");
    string str;
    while (getline(fin, str)) //getline() is used to read a line of text from the file and store it in the string variable 'str'.
    //while loop continues until the end of the file is reached, and each line is printed to the console.
    {
        cout << str << endl; //output the content of the file to the console.
    }
    fin.close();
    return 0;
}
