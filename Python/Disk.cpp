#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Disk{

    private:
        string type;
        string capacity;
        int price;

    public:
        /*constructor*/
        Disk(){
            this->type = "Kosong";
            this->capacity = "Kosong";
            this->price = 0;
        }

        Disk(string type, string capacity, int price){
            this->type = type;
            this->capacity = capacity;
            this->price = price;
        }

        /*get-set*/
        void setType(string type){
            this->type = type;
        }
        string getType(){
            return this->type;
        }

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

        /*print output*/
        void printDisk(){
            cout << "Disk type: " << this->type << endl;
            cout << "Disk capacity: " << this->capacity << endl;
            cout << "Disk price: " << this->price << endl;
        }
        /*destructor*/
        ~Disk(){
        }
};