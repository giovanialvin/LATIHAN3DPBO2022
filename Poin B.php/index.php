<?php

include "PC.php";

//cara 1
$ObjProcessor = new Processor("Intel Core i5", 5000);
$ObjDisk = new Disk("SSD", "128 TB", 200120);

$ObjRam = new RAM("16GB", 4000);

$Unit1 = new PC($ObjProcessor, $ObjDisk, $ObjRam);

// menampilkan hasil atribut yang ada pada kelas
$Unit1->output();

?>