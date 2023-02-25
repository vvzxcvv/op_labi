#ifndef TEXTFILE_H
#define TEXTFILE_H

#include <string>
#include <fstream>

class TextFile {
public:
    TextFile();
    explicit TextFile(const std::string& filename);

    bool open(const std::string& filename);
    bool close();
    std::string getFilename() const;
    bool isOpen() const;
    bool getNextLine(std::string& line);
    bool getNextWord(std::string& word);

private:
    std::string m_filename;
    std::ifstream m_file;
};

#endif // TEXTFILE_H
