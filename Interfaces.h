#ifndef INTERFACES_H
#define INTERFACES_H

#include <string>
using namespace std;

class Printable {
public:
    virtual void print() const = 0;
    virtual ~Printable() {}
};

class Searchable {
public:
    virtual bool matches(const string&) const = 0;
    virtual ~Searchable() {}
};

class Notification {
public:
    virtual void sendNotification(const string&) = 0;
    virtual ~Notification() {}
};

#endif