from platform import processor
from Processor import Processor
from Disk import Disk
from RAM import RAM
from PC import PC

#cara 1
P1 = Processor("Intel Core i6", 5000)
D1 = Disk("HDD", "500 GB", 13500)
R1 = RAM("4 GB", 124)
Unit1 =  PC(P1, D1, R1);

print("=====================================================")
Unit1.output()
print("=====================================================")


#cara 2
P2 = Processor()
P2.setName("AMD Ryzen 4")
P2.setPrice(12421312310)

D2 =  Disk()
D2.setType("SSD")
D2.setCapacity("512 MB")
D2.setPrice(12341231)

R2 = RAM()
R2.setCapacity("8 GB")
R2.setPrice(10)

Unit2 = PC()
Unit2.setProcessor(P2)
Unit2.setDisk(D2)
Unit2.setRAM(R2)
Unit2.setTotalPrice(P2, D2, R2)


print("=====================================================")
Unit2.output()
print("=====================================================")
