<?php
class Processor
{
    //atribute
    private $name;
    private $price;

    //constructor
    function __construct($name, $price)
    {
        $this->name = $name;
        $this->price = $price;
    }

    // get set methods
    function setName($name)
    {
        $this->name = $name;
    }
    function  getName()
    {
        return $this->name;
    }
    function setPrice($price)
    {
        $this->price = $price;
    }

    function getPrice()
    {
        return $this->price;
    }

    // Output Methdos
    function output()
    {
        echo "Processor                 : " . $this->getName() . "<br>";
        echo "Harga                     : " . $this->getPrice() . "<br>";
    }

    //destructor
    function __destruct()
    {
    }
}