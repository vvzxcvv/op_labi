class BaseCObject {
public:
    // Class name (data type).
    virtual const char* classname() = 0;
    // Size of occupied memory.
    virtual unsigned int size() = 0;
};
