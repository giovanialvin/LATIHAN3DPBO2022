<?php
class Disk
{
    //atribute
    private $type = "";
    private $capacity = "";
    private $price = 0;

    //constructor
    function __construct($type = "", $capacity = "", $price = 0)
    {
        // konstruktor
        $this->type = $type;
        $this->capacity = $capacity;
        $this->price = $price;
    }
    //get set methods
    function setType($type)
    {
        $this->type = $type;
    }
    function getType()
    {
        return $this->type;
    }
    function setCapacity($capacity)
    {
        $this->capacity = $capacity;
    }
    function getCapacity()
    {
        return $this->capacity;
    }
    function setPrice($price)
    {
        $this->price = $price;
    }
    function getPrice()
    {
        return $this->price;
    }
    //output methods
    function output()
    {
        echo "Disk                      : " . $this->getType() ." ".$this->getCapacity(). "<br>";
        echo "Harga                     : " . $this->getPrice() . "<br>";
    }


    //destructor
    function __destruct()
    {
    }
}