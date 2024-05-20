#ifndef IBU_H
#define IBU_H

class ibu {
public:
    string nama;
    vector<anak*> daftar_anak;

    ibu (string pNama) :nama(pNama) {
        cout << "Ibu \"" << nama << "\" ada\n";
    }
    ~ibu() {
        cout << "Ibu \"" << nama << "\" tidak ada \n";
    }
    void tambahAnak(anak* pAnak);
    void cetakAnak();
};