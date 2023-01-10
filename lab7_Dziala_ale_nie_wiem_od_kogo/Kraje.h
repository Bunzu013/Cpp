#ifndef KRAJEH_H
#define KRAJEH_H

#include <iostream>
#include <QMap>
#include <QPair>
#include <QVector>

using namespace std;

class Kraje
{
private:
    QMap<string, int> kraje = QMap<string, int>();
public:
    void addKraj(string name, int population)
    {
        kraje.insert(name, population);
    }
    string showKraje()
    {
        string output = "";
        for (auto it = kraje.begin(); it != kraje.end(); ++it)
            output += it.key() + ": " + to_string(it.value()) + "\n";
        return output;
    }
    string showOnlyKraje()
    {
        string output = "";
        for (auto it = kraje.begin(); it != kraje.end(); ++it)
            output += it.key() + "\n";
        return output;
    }
    string showKrajeZakres(int lower, int upper)
    {
        string output = "";
        for (auto it = kraje.begin(); it != kraje.end(); ++it)
            if(it.value() > lower && it.value() < upper)
                output += it.key() + ": " + to_string(it.value()) + "\n";
        return output;
    }
    void remove(string kraj)
    {
        kraje.remove(kraj);
    }
    string showSorted(int mode)
    {
        string output = "";
        QVector<QPair<string, int>> vec = QVector<QPair<string, int>>();
        for (auto it = kraje.begin(); it != kraje.end(); ++it)
            vec.push_back(QPair<string, int>(it.key(), it.value()));
        if(mode == 1)
            sort(vec.begin(), vec.end(), [](QPair<string, int> p1, QPair<string, int> p2){return p1.second > p2.second;});
        else
            sort(vec.begin(), vec.end(), [](QPair<string, int> p1, QPair<string, int> p2){return p1.second < p2.second;});
        for(auto p : vec)
        {
            output += p.first + ": " + to_string(p.second) + "\n";
        }
        return output;
    }
};

#endif // KRAJEH_H
