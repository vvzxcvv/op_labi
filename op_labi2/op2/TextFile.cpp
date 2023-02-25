#include "TextFile.h"

TextFile::TextFile() : m_filename(""), m_file() {}

TextFile::TextFile(const std::string& filename) : m_filename(filename), m_file() {
    open(filename);
}

bool TextFile::open(const std::string& filename) {
    m_filename = filename;
    m_file.open(filename);
    return isOpen();
}

bool TextFile::close() {
    m_file.close();
    return !isOpen();
}

std::string TextFile::getFilename() const {
    return m_filename;
}

bool TextFile::isOpen() const {
    return m_file.is_open();
}

bool TextFile::getNextLine(std::string& line) {
    if (!isOpen()) {
        return false;
    }

    if (std::getline(m_file, line)) {
        return true;
    }

    return !m_file.fail();
}

bool TextFile::getNextWord(std::string& word) {
    if (!isOpen()) {
        return false;
    }

    m_file >> word;
    return !m_file.fail();
}
