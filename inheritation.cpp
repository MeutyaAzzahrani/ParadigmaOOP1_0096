#include <iostream>
#include <vector>
using namespace std;

class orang {
public:
    string nama;
    
    orang(string pNama) :
        nama(pNama) {
            cout << "orang dibuat\n" << endl;
        }
    ~orang() {
        cout << "orang dihapus\n" << endl;
    }

