// Exercise 6: Read a text file, count vowels and words, reverse, and capitalize 2nd letters
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
using namespace std;

// Count vowels (a, e, i, o, u) regardless of case
int countVowels(const string& text) {
    int count = 0;
    for (char c : text) {
        char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') count++;
    }
    return count;
}

// Count total words separated by whitespace
int countWords(const string& text) {
    istringstream stream(text);
    string word;
    int count = 0;
    while (stream >> word) count++;
    return count;
}

// Reverse the input string
string Reverse(const string& text) {
    string result = "";
    for (int i = text.size() - 1; i >= 0; i--) {
        result += text[i];
    }
    return result;
}

// Capitalize the second letter of each word
string capitalizeSecondLetters(string text) {
    int positionInWord = 0;
    for (size_t i = 0; i < text.size(); i++) {
        if (text[i] == ' ') {
            positionInWord = 0;
        } else {
            if (positionInWord == 1) text[i] = toupper(text[i]);
            positionInWord++;
        }
    }
    return text;
}

int main() {
    // Open statement.txt and verify it exists
    ifstream file("statement.txt");
    if (!file.is_open()) {
        cout << "Could not open statement.txt" << endl;
        return 1;
    }

    // Read file contents into fileData
    string fileData;
    getline(file, fileData);
    file.close();

    cout << "Original text : " << fileData << endl;
    cout << "Vowels        : " << countVowels(fileData) << endl;
    cout << "Words         : " << countWords(fileData) << endl;
    cout << "Reversed      : " << Reverse(fileData) << endl;
    cout << "2nd capitalized: " << capitalizeSecondLetters(fileData) << endl;
    return 0;
}
