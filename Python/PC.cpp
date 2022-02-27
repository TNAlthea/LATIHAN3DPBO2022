#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#include "Processor.cpp"
#include "Disk.cpp"
#include "RAM.cpp"

class PC{

    private:
        Processor procie;
        Disk storage;
        RAM stick;
        int totalPrice;

    public:
        /*Constructor*/
        PC(){
        }
        PC(Processor procie, Disk storage, RAM stick){
            this->procie = procie;
            this->storage = storage;
            this->stick = stick;
            setTotalPrice(procie, storage, stick);
            this->totalPrice = getTotalPrice();
        }

        /*get-set*/
        void setProcessor(Processor procie){
            this->procie = procie;
        }
        Processor getProcessor(){
            return this->procie;
        }

        void setDisk(Disk storage){
            this->storage = storage;
        }
        Disk getDisk(){
            return this->storage;
        }

        void setRAM(RAM stick){
            this->stick = stick;
        }
        RAM getRAM(){
            return this->stick;
        }

        void setTotalPrice(Processor procie, Disk storage, RAM stick){
            this->totalPrice = procie.getPrice() + storage.getPrice() + stick.getPrice();
        }
        int getTotalPrice(){
            return this->totalPrice;
        }
        
        void printALL(){
            procie.printProcessor();
            storage.printDisk();
            stick.printRAM();
            cout << endl << "TOTAL PRICE: " << this->totalPrice << endl;
        }
        /*destructor*/
        ~PC(){
        }
};