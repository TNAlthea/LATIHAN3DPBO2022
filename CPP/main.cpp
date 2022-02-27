#include <string>
#include <iostream>
#include <bits/stdc++.h>
#include "PC.cpp"

using namespace std;

//bismillahirrahmanirrahiim
/*
Nama : Sabian Annaya Havid
Program Studi/Kelas : Ilmu Komputer/C2
NIM : 2005021

Saya Sabian Annaya Havid mengerjakan Latihan 3 dalam mata kuliah
Desain Pemograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.
*/

int main(){

    /*Set Komponen Komputer Hardcode*/
    Processor procie("Ryzen 5 5600X", 4300000);
    Disk storage("SSD", "1 TB", 1600000);
    RAM stick("16 GB", 1200000);

    PC kom(procie, storage, stick);
    
    /*Set komponen komputer oleh user*/
    int i, n;
    cout << "Input banyak PC: "; cin >> n; cout << endl;
    PC uPC[n];

    string namePro, typeDisk, capaDisk, capaRAM;
    int pricePro, priceDisk, priceRAM;
    for (i = 0; i < n; i++){
        cout << "Input barang ke-" << i+1 << endl; 
        cout << "Masukkan nama processor: "; cin >> namePro;
        cout << "Masukkan harga processor: "; cin >> pricePro;
        cout << "Masukkan tipe penyimpanan: "; cin >> typeDisk;
        cout << "Masukkan kapasitas penyimpanan: "; cin >> capaDisk;
        cout << "Masukkan harga penyimpanan: "; cin >> priceDisk;
        cout << "Masukkan kapasitas RAM: "; cin >> capaRAM;
        cout << "Masukkan harga RAM: "; cin >> priceRAM; cout << endl;

        Processor pro(namePro, pricePro);
        Disk d(typeDisk, capaDisk, priceDisk);
        RAM rams(capaRAM, priceRAM);
        
        uPC[i].setProcessor(pro);
        uPC[i].setDisk(d);
        uPC[i].setRAM(rams);
        uPC[i].setTotalPrice(pro, d, rams);
    }
    
    /*Output*/
    /*HC*/  
    cout << endl << "OUTPUT" << endl;
    cout << "PC 'Kom' (HardCode)" << endl;
    kom.printALL();
    /*User*/
    for (i = 0; i < n; i++){
        cout << "PC ke- " << i+1 << endl;
        uPC[i].printALL();
        cout << endl;
    }
return 0;
}
