#include <iostream>
#include <string>
#include "TextFile.h"

using namespace std;
int main() {
    string filename;
    cout << "filename: ";
    cin >> filename;

    TextFile file(filename);
    if (!file.isOpen()) {
        cout << "error" << std::endl;
        return 1;
    }

    cout << "file: " << file.getFilename() << std::endl;

    string line;
    while (file.getNextLine(line)) {
        cout << line << std::endl;

        string word;
        while (file.getNextWord(word)) {
            cout << word << std::endl;
        }
    }

    file.close();

    return 0;
}
