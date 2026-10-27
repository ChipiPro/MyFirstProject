// EXERCISE 6: Read a text file, count vowels and words, reverse, capitalize 2nd letters
#include <iostream>
#include <fstream>     // ifstream: reading files
#include <sstream>     // istringstream: splitting text into words
#include <string>
#include <cctype>      // tolower, toupper, isalpha
using namespace std;

// Counts a, e, i, o, u in either case.
int countVowels(const string& text) {
    int count = 0;
    for (char c : text) {                          // visit every character
        char lower = tolower(c);                   // make it lowercase so 'A' and 'a' are treated the same
        if (lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u') count++;
    }
    return count;
}

// Counts words by letting a stream split on spaces.
int countWords(const string& text) {
    istringstream stream(text);
    string word;
    int count = 0;
    while (stream >> word) count++;                // each >> grabs the next word
    return count;
}

// Required function name: Reverse. Builds the text backwards.
string Reverse(const string& text) {
    string result = "";
    for (int i = text.size() - 1; i >= 0; i--) {   // start at the LAST character, walk to the first
        result += text[i];
    }
    return result;
}

// Makes the 2nd letter of every word uppercase.
string capitalizeSecondLetters(string text) {
    int positionInWord = 0;                        // 0 = first letter of the word, 1 = second, ...
    for (size_t i = 0; i < text.size(); i++) {
        if (text[i] == ' ') {
            positionInWord = 0;                    // a space means the next word starts fresh
        } else {
            if (positionInWord == 1) text[i] = toupper(text[i]);   // second letter, so capitalize it
            positionInWord++;
        }
    }
    return text;
}

int main() {
    ifstream file("statement.txt");                // open the file (must be in the folder you run from)
    if (!file.is_open()) {                         // MISTAKE: file in the wrong folder lands here
        cout << "Could not open statement.txt" << endl;
        return 1;
    }

    string fileData;                               // required variable name
    getline(file, fileData);                       // read the line into fileData
    file.close();

    cout << "Original text : " << fileData << endl;
    cout << "Vowels        : " << countVowels(fileData) << endl;
    cout << "Words         : " << countWords(fileData) << endl;
    cout << "Reversed      : " << Reverse(fileData) << endl;
    cout << "2nd capitalized: " << capitalizeSecondLetters(fileData) << endl;
    return 0;
}
