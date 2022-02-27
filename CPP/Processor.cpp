#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Processor{

    private:
        string name;
        int price;

    public:
        /*constructor*/
        Processor(){
            this->name = "Kosong";
            this->price = 0;
        }
        Processor (string name, int price){
            this->name = name;
            this->price = price;
        }

        /*get-set*/
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return this->name;
        }

        void setPrice(int price){
            this->price = price;
        }
        int getPrice(){
            return this->price;
        }

        /*print output*/
        void printProcessor(){
            cout << "Processor name: " << this->name << endl;
            cout << "Processor price: " << this->price << endl;
        }

        /*destructor*/
        ~Processor(){
        }
};