<?php
include "Processor.php";
include "Disk.php";
include "RAM.php";

class PC
{
    //atribute
    private $ProcessorObj;
    private $DiskObj;
    private $RAMObj;
    private $totalPrice;

    // konstruktor
    function __construct($P, $D, $R)
    {
        $this->ProcessorObj = $P;
        $this->DiskObj = $D;
        $this->RAMObj = $R;
        $this->totalPrice = $P->getPrice() + $D->getPrice() + $R->getPrice();
    }

    //get set Methods
    function  setProcessor($P)
    {
        $this->ProcessorObj = $P;
    }

    function  setDisk($D)
    {
        $this->DiskObj = $D;
    }

    function  setRam($R)
    {
        $this->RAMObj = $R;
    }
    
    function  setTotalPrice($P, $D, $R)
    {
        $this->totalPrice = $P->getPrice() + $D->getPrice() + $R->getPrice();
    }

    function getProcessor()
    {
        return $this->ProcessorObj;
    }

    function getDisk()
    {
        return $this->DiskObj;
    }

    function getRam()
    {
        return $this->RAMObj;
    }
    function getTotalPrice()
    {
        return $this->totalPrice;
    }

    // Output Method
    function  output()
    {
        $this->ProcessorObj->Output();
        $this->DiskObj->Output();
        $this->RAMObj->Output();
        echo "Total Harga               : " . $this->getTotalPrice() . "<br>";
    }
    //destructor
    function __destruct()
    {
    }
}

?>