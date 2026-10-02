#include "String.h"

int String::getStrLen(const char* s) const {
    if (s == nullptr) return 0;
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

void String::copyStr(char* dest, const char* src) const {
    if (dest == nullptr || src == nullptr) return;
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

String::String() : str(nullptr), length(0) {}

String::String(const char* s) {
    if (s == nullptr) {
        str = nullptr;
        length = 0;
    }
    else {
        length = getStrLen(s);
        str = new char[length + 1];
        copyStr(str, s);
    }
}

String::String(const String& other) {
    if (other.str == nullptr) {
        str = nullptr;
        length = 0;
    }
    else {
        length = other.length;
        str = new char[length + 1];
        copyStr(str, other.str);
    }
}

String::~String() {
    delete[] str;
}

String& String::operator=(const String& other) {
    if (this != &other) {
        delete[] str;
        if (other.str == nullptr) {
            str = nullptr;
            length = 0;
        }
        else {
            length = other.length;
            str = new char[length + 1];
            copyStr(str, other.str);
        }
    }
    return *this;
}

int String::getLength() const {
    return length;
}

const char* String::c_str() const {
    return str;
}