#pragma once

class String {
private:
    char* str;
    int length;

    int getStrLen(const char* s) const;
    void copyStr(char* dest, const char* src) const;

public:
    String();
    String(const char* s);
    String(const String& other);
    ~String();

    String& operator=(const String& other);

    int getLength() const;
    const char* c_str() const;
};