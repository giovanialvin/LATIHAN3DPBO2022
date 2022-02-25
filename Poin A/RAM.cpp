#include<iostream>

using namespace std;

class RAM{
    private :
        //atribut
        string capacity;
        int priceR;
    public :
        //konstruktor
        RAM(){}
        RAM(string c, int p){
            this->capacity = c;
            this->priceR = p;
            
        }

        //setter & getter
        void setCapacity(string c){
            this->capacity = c;
        }
        void setPriceR(int p){
            this->priceR = p;
        }


        string getCapacity(){
            return this->capacity;
        }

        int getPriceR(){
            return this->priceR;
        }


        //output
        void printRAM(){
            cout << "RAM          : " << this->getCapacity() << endl;
            cout << "Harga        : " << this->getPriceR() << endl;


        }

        ~RAM(){}

};