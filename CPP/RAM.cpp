#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class RAM{

    private:
        string capacity;
        int price;

    public:
        /*Constructor*/
        RAM(){
            this->capacity = "Kosong";
            this->price = 0;
        }
        RAM(string capacity, int price){
            this->capacity = capacity;
            this->price = price;
        }

        /*get-set*/
        void setCapacity(string capacity){
            this->capacity = capacity;
        }
        string getCapacity(){
            return this->capacity;
        }

        void setPrice(int price){
            this->price = price;
        }
        int getPrice(){
            return this->price;
        }

        void printRAM(){
            cout << "RAM capacity: " << this->capacity << endl;
            cout << "RAM price: " << this->price << endl;
        }
        /*destructor*/
        ~RAM(){
        }
};