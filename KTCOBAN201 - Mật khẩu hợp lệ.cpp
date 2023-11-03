#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;


bool isValidPassword(string password) {  
    if (password.length() < 8) {
        return false;
    }
    if (!any_of(password.begin(), password.end(), ::isupper)) {
        return false;
    }
    if (!any_of(password.begin(), password.end(), ::islower)) {
        return false;
    } 
    if (!any_of(password.begin(), password.end(), ::isdigit)) {
        return false;
    }
    if (!any_of(password.begin(), password.end(), ::ispunct)) {
        return false;
    }   
    for (int i = 1; i < password.length(); ++i) {
        if (password[i] == password[i - 1]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    ifstream inputFile("password.in");
    ofstream outputFile("res.out");

    if (!inputFile) {
        return 1;
    }
    if (!outputFile) {
        return 1;
    }

    string password;

    while (getline(inputFile, password)) {
        string result = isValidPassword(password) ? "VALID" : "INVALID";
        outputFile << result << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}