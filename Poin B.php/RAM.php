<?php
class RAM
{
    //atribute
    private $capacity;
    private $price;

    //construktor
    function __construct($capacity, $price)
    {
        $this->capacity = $capacity;
        $this->price = $price;
    }

    //get set methods
    function setCapacity($capacity)
    {
        $this->capacity = $capacity;
    }

    function  getCapacity()
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

    // output method
    function output()
    {   
        echo "RAM                       : ". $this->getCapacity() . "<br>";
        echo "Harga                     : ". $this->getPrice() . "<br>";
    }

    //destructor
    function __destruct()
    {
    }
}