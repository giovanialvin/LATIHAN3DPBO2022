#include<iostream>

using namespace std;

class Disk{
    private :
        //atribut
        string type;
        string capacity;
        int priceD;
    public :
        //konstruktor
        Disk(){}
        Disk(string t, string c, int p){
            this->type = t;
            this->capacity = c;
            this->priceD = p;
            
        }

        //setter & getter
        void setType(string t){
            this->type = t;
        }

        void setCapacity(string c){
            this->capacity = c;
        }
        void setPriceD(int p){
            this->priceD = p;
        }

        string getType(){
            return this->type;
        }

        string getCapacity(){
            return this->capacity;
        }

        int getPriceD(){
            return this->priceD;
        }


        //output
        void printType(){
            cout << "Disk         : " << this->getType() <<" "<< this->getCapacity() << endl;
            cout << "Harga        : " << this->getPriceD() << endl;


        }

        ~Disk(){}

};