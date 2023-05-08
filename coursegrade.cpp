#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    // Read the file name of the tsv file from the user.
    string fileName;
    //cout << "Enter the name of the tsv file: ";
    cin >> fileName;
    
    // Open the tsv file and read the student information.
    ifstream inFile(fileName);
    if (!inFile) {
        cerr << "Error: Could not open file." << endl;
        return 1;
    }
    
    // Open the output file.
    ofstream outFile("report.txt");
    if (!outFile) {
        cerr << "Error: Could not open file." << endl;
        return 1;
    }
    
    // Compute the average of each exam.
    double sumMidterm1 = 0, sumMidterm2 = 0, sumFinal = 0;
    int numStudents = 0;
    while (true) {
        string lastName, firstName;
        int midterm1, midterm2, final;
        inFile >> lastName >> firstName >> midterm1 >> midterm2 >> final;
        if (inFile.eof()) {
            break;
        }
        if (inFile.fail()) {
            cerr << "Error: Failed to read data from file." << endl;
            return 1;
        }
        // Compute the average exam score of each student.
        double average = (midterm1 + midterm2 + final) / 3.0;
        // Assign a letter grade to each student based on the average exam score.
        string letterGrade;
        if (average >= 90) {
            letterGrade = "A";
        } else if (average >= 80) {
            letterGrade = "B";
        } else if (average >= 70) {
            letterGrade = "C";
        } else if (average >= 60) {
            letterGrade = "D";
        } else {
            letterGrade = "F";
        }
        // Output the student information to the output file.
        outFile << lastName << "\t" << firstName << "\t"
                << midterm1 << "\t" << midterm2 << "\t" << final << "\t"
                << letterGrade << endl;
                //cout<<endl;
                
         //cout<<endl;
        // Accumulate the exam scores for computing the averages.
        sumMidterm1 += midterm1;
        sumMidterm2 += midterm2;
        sumFinal += final;
        numStudents++;
        cout<<"\n";
    }
    cout<<"\n";
    // Output the exam averages to the output file.
    double avgMidterm1 = sumMidterm1 / numStudents;
    double avgMidterm2 = sumMidterm2 / numStudents;
    double avgFinal = sumFinal / numStudents;
    outFile <<"\n"<< "Averages:" << fixed << setprecision(2)
            << " midterm1 " << avgMidterm1 << ", "
            << "midterm2 " << avgMidterm2 << ", "
            << "final " << avgFinal << endl;
    //cout<<"\n";
    // Close the input and output files.
    inFile.close();
    outFile.close();
    
    return 0;
}
