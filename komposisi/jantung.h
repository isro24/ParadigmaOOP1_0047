#ifndef JANTUNG_H
#define JANTUNG_H

using namespace std;

class jantung {
public:
    jantung() {
        cout << "Jantung dihidupkan\n";
    }
    ~jantung() {
        cout << "Jantung dimatikan\n";
    }
};
#endif