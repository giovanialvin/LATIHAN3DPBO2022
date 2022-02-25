from Processor import Processor
from Disk import Disk
from RAM import RAM
class PC:
    #atribut
    
    ProcessorObj = Processor() 
    DiskObj = Disk()
    RAMObj = RAM()
    totalPrice = 0
    
    #constructor
    def __init__(self, p = Processor(), d = Disk(), r = RAM()) :
        self.ProcessorObj = p
        self.DiskObj = d
        self.RAMObj = r
        self.totalPrice = p.getPrice() + d.getPrice() + r.getPrice()
    
    
    #set get methods
    def setTotalPrice(self,  p = Processor(), d = Disk(), r = RAM()) :
        self.totalPrice =  p.getPrice() + d.getPrice() + r.getPrice()
        
    def setProcessor(self, p = Processor()) :
        self.ProcessorObj = p
        
    def setDisk(self, d = Disk()) : 
        self.DiskObj = d
        
    def setRAM(self, r = RAM()) : 
        self.RAMObj = r
        
    def getTotalPrice(self) :
        return self.totalPrice
    
    def getProcessor(self) :
        return self.ProcessorObj
    
    def getDisk(self) :
        return self.DiskObj
    
    def getRAM(self) :
        return self.RAMObj
    
    
    def output(self) :
        self.ProcessorObj.output()
        self.DiskObj.output()
        self.RAMObj.output()
        print("----------------------------------------------------+")
        print("Total Price                  : " + str(self.getTotalPrice()))
        
        
    
        
        
        
        
    
    
    