#pragma once

#include <iostream>
#include <vector>

using namespace std;

class StudentRecord {
private:
    string name_;
    string surname_;
    char sex_{};
    int mark_{};
    string email_;
public:
    StudentRecord() = default;

    StudentRecord(string name, string surname, char sex, int mark, string email);

    const string& getName() const;

    const string& getSurname() const;

    char getSex() const;

    int getMark() const;

    const string& getEmail() const;

    string toString() const;

    string serializeToCSV() const;
};

namespace StudentRecordException {
    struct StudentRecordException : public std::exception {
    };

    struct Name : public StudentRecordException {
        const char* what() const noexcept override {
            return "Wrong name format";
        }
    };

    struct Surname : public StudentRecordException {
        const char* what() const noexcept override {
            return "Wrong surname format";
        }
    };

    struct Sex : public StudentRecordException {
        const char* what() const noexcept override {
            return "Wrong sex format";
        }
    };

    struct Mark : public StudentRecordException {
        const char* what() const noexcept override {
            return "Wrong mark format";
        }
    };

    struct Email : public StudentRecordException {
        const char* what() const noexcept override {
            return "Wrong email format";
        }
    };
}