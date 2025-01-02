#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main() {
    stringstream ss("int x = 10 ; if ( x == 10 ) { cout << x ; } else { return 0 ; }");
    vector<string> wordList;
    string word;
    while (ss >> word) {
        wordList.push_back(word);
    }
        set<string> keywords = {"int", "if", "else", "while", "return", "cout", "void", "for", "switch", "case", "break", "continue", "default", "goto", "long"};
    
    set<string> operators = {"+", "-", "*", "/", "=", "==", ">", "<", "!", "&&", "||", "++", "--", "+=", "-=", "*=", "/=", "%", "%=", "&", "|", "^", "~", ">>", "<<", "&&", "||"};
    
    set<string> delimiters = {";", ",", "{", "}", "(", ")", "[", "]"};
    
    set<string> identifiers;

    cout << "Keywords:\n";
    for (const auto& str : wordList) {
        if (keywords.find(str) != keywords.end()) {
            cout << str << endl;
        }
    }

    cout << "\nOperators:\n";
    for (const auto& str : wordList) {
        if (operators.find(str) != operators.end()) {
            cout << str << endl;
        }
    }

    cout << "\nDelimiters:\n";
    for (const auto& str : wordList) {
        if (delimiters.find(str) != delimiters.end()) {
            cout << str << endl;
        }
    }

    cout << "\nIdentifiers:\n";
    for (const auto& str : wordList) {
        if (keywords.find(str) == keywords.end() && operators.find(str) == operators.end() && delimiters.find(str) == delimiters.end()) {
            cout << str << endl;
        }
    }
}
