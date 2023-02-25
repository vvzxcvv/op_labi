#include <iostream>
#include <string>
#include "TextFile.h"

int main() {
    std::string filename;
    std::cout << "filename: ";
    std::cin >> filename;

    TextFile file(filename);
    if (!file.isOpen()) {
        std::cout << "error" << std::endl;
        return 1;
    }

    std::cout << "file: " << file.getFilename() << std::endl;

    std::string line;
    while (file.getNextLine(line)) {
        std::cout << line << std::endl;

        std::string word;
        while (file.getNextWord(word)) {
            std::cout << word << std::endl;
        }
    }

    file.close();

    return 0;
}
