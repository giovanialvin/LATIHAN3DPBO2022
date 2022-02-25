#include<bits/stdc++.h>
#include <iostream>

#include "PC.cpp"
using namespace std;


int main(){

    //Buat objek 
    //input mode 1
    Processor p("Intel Core i9 Gen 7th", 2000000);
    Disk d("SSD", "1 TB", 500000);
    RAM r("16 GB", 1000000);
    PC unit1(p, d, r);

    //output 
    cout << "====================================" << endl;
    unit1.printPC();

    cout<<endl;

    //Input mode 2
    Processor p2;
    p2.setName("Intel Celleron Gen Halilintar");
    p2.setPriceP(5000);
    
    Disk d2;
    d2.setType("HDD");
    d2.setCapacity("16 GB");
    d2.setPriceD(10000);

    RAM r2;
    r2.setCapacity("1 GB");
    r2.setPriceR(5000000);

    PC unit2;
    unit2.setProcessor(p2);
    unit2.setDisk(d2);
    unit2.setRAM(r2);
    unit2.setTotalPrice(p2, d2, r2);
    //output
    cout << "====================================" << endl;
    unit2.printPC();

    return 0;
}

