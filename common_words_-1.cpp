#include<iostream>
#include<bits/stdc++.h>
#include <string>
#include <unordered_set>
using namespace std;
int countCommonWords(string&s1,string& s2) {
    unordered_set<string> words;
    string word;
    for (char c : s1) {
        if (c == ' ') {
            if (!word.empty()) {
                words.insert(word);
                word.clear();
            }
        } else {
            word.push_back(tolower(c));
        }
    }
    if (!word.empty()) {
        words.insert(word);
    }
    int commonCount = 0;
    word.clear();
    for (char c : s2) {
        if (c == ' ') {
            if (!word.empty() && words.count(word) > 0) {
                commonCount++;
            }
            word.clear();
        } else {
            word.push_back(tolower(c));
        }
    }
    if (!word.empty() && words.count(word) > 0) {
        commonCount++;
    }

    return commonCount;
}

int main() {
    string s1;
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    int commonWordCount = countCommonWords(s1, s2);
    cout<<commonWordCount<<endl;
    return 0;
}
