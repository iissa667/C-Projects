#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    cin >> filename;

    ifstream infile(filename);
    string line;

    while (getline(infile, line)) {
        string new_filename = line.substr(0, line.find("_")) + "_info.txt";
        cout << new_filename << endl;
    }

    infile.close();
    return 0;
}
