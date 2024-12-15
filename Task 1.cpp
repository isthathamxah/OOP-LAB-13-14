#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inputFile("File.txt");

    if (!inputFile) {
        cerr << "Unable to open file!" << endl;
        return 1; 
    }
    char ch;

    while (inputFile.get(ch)) {
        cout << ch << endl;
    }

    inputFile.close();
    return 0;
}
