#include<iostream>

using namespace std;

class Processor{
    private :
        //atribut
        string name;
        int priceP;
    public :
        //konstruktor
        Processor(){}
        Processor(string n, int p){
            this->name = n;
            this->priceP = p;
            
        }

        //setter & getter
        void setName(string n){
            this->name = n;
        }

        void setPriceP(int p){
            this->priceP = p;
        }

        string getName(){
            return this->name;
        }

        int getPriceP(){
            return this->priceP;
        }


        //output
        void printProcessor(){
            cout << "Processor    : " << this->getName() << endl;
            cout << "Harga        : " << this->getPriceP() << endl;


        }

        ~Processor(){}

};