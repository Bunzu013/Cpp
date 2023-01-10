#include "mainwindow.h"
#include <QApplication>
#include <QCoreApplication>
#include <iostream>
#include <QVector>
#include <QMap>
#include <QtAlgorithms>
#include <algorithm>

using namespace std;

template<typename T>
void show(QVector<T> vec)
{
    cout << "Zawartosc vec: ";
    typename QVector<T>::iterator p;
    for (p = vec.begin(); p != vec.end(); ++p)
    {
        cout << *p << " ";
    }
    cout << endl;
}
class Compare{
public:
    bool operator()(int s1, int s2){
        if(s1%2>s2%2)
            return true;
        else
            return false;
    }
};

int example(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVector<int> vec(6);
    vec[0]=1;
    vec[1]=2;
    vec.append(2);
    vec.push_back(4);
    vec << 5 << 6;
    cout<<"Zawartosc vec: :";
    for(int i=0; i <vec.count(); ++i)
        cout<<vec[i]<<" ";
    cout<<endl<<"Zawartosc vec: :";
    for(int i =0; i<vec.size(); ++i)
        cout<< vec.at(i) << " ";
    cout<<endl<<"Zawartosc vec: :";
    QVectorIterator<int> i(vec);
    while(i.hasNext())
        cout << i.next()<<" ";
    cout<<endl;
    show(vec);
    cout<<"Zawartosc vec: :";
    QVector<int>::iterator p;
    for (p = vec.begin(); p != vec.end(); ++p)
    {
        *p += 2;
        cout<<*p<<" ";
    }
    cout<<endl;
    vec.insert(1,666);
    vec.insert(vec.begin(),777);
    show(vec);
    cout<< "Ostatni indeks gdzie 2: " <<vec.lastIndexOf(2)<<endl;
    vec.move(1,vec.length()-1);
    vec.remove(3);
    show(vec);

    QMap<int,QString> shops;
    shops[111]= "CCC";
    shops[222]= "Decathlon";
    shops.insert(333,"Reserved");
    QMapIterator<int,QString> j(shops);
    while(j.hasNext())
    {
        j.next();
        cout<<"Id: "<<j.key()<<" sklep: " << j.value().toStdString()<<endl;
    }
    QList<int> keys=shops.keys();
    QList<QString> values=shops.values();
    cout<<"Klucze: "<<endl;
    for(int i=0;i<keys.size();i++){
        cout<<keys[i]<<" ";
    }
    cout<<endl;
    QPair<QMap<int,QString>::iterator,QMap<int,QString>::
    iterator> range=shops.equal_range(111);
    cout<<"Wartosc, dla klucza 111: " <<range.first->toStdString()<<endl;

    show(vec);
    int howMany=count(vec.begin(),vec.end(),2);
    cout<<"Liczba wystapien 2: "<<howMany<<endl;
    QVector<int>::iterator it2=find(vec.begin(),
    vec.end(),-2);
    if(it2==vec.end())
        cout<<"Element nie zostal znaleziony"<<endl;
    sort(vec.begin(), vec.end(), greater<int>());
    show(vec);
    sort(vec.begin(), vec.end(), Compare());
    show(vec);

    return a.exec();
}

bool pangram(string s)
{
    QSet<char> set = QSet<char>();
    for(char c : s)
    {
        if(c == ' ')
            continue;
        set.insert(tolower(c));
    }
    if(set.size() == 26)
        return true;
    return false;
}

int main(int argc, char *argv[])
{
    //example(argc, argv);
    cout << pangram("The quick brown fox jumps over the lazy dog") << endl;
    cout << pangram("The quick brown fox jumps over the lazy cat") << endl;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
