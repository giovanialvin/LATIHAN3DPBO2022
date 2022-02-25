#include<iostream>

using namespace std;

#include "Processor.cpp"
#include "Disk.cpp"
#include "RAM.cpp"

class PC{
    private :
        //atribut
        Processor p;
        Disk d;
        RAM r;
        int totalPrice;

    public :
        //konstruktor
        PC(){}

        PC(Processor p, Disk d, RAM r){
            this->p = p;
            this->d = d;
            this->r = r;
            this->totalPrice = p.getPriceP() + d.getPriceD() + r.getPriceR();
            
        }

        //setter & getter
        void setProcessor(Processor p){
            this->p = p;
        }

        void setDisk(Disk d){
            this->d = d;
        }

        void setRAM(RAM r){
            this->r = r;
        }
        void setTotalPrice(Processor p, Disk d, RAM r){
             this->totalPrice = p.getPriceP() + d.getPriceD() + r.getPriceR();
        }
        
        Processor getProcessor(){
            return this->p;
        }

        Disk getDisk(){
            return this->d;
        }

        RAM getRAM(){
            return this->r;

        }

        
        int getTotalPrice(){
            return this->totalPrice;
        }

        



        //output
        void printPC(){
            p.printProcessor();
            d.printType();
            r.printRAM();
            cout << "------------------------------------" << endl;
            cout << "Total Harga  : " << getTotalPrice() << endl;
            cout << "====================================" << endl;

        }

        ~PC(){}

};