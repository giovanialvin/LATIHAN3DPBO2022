class Disk:
    #atribut
    type = ""
    capacity = ""
    price = 0
    
    #constructor
    def __init__(self, t = "", c = "", p = 0) :
        self.type = t
        self.capacity = c
        self.price = p
    
    #get set methods
    def setType(self, t= "") :
        self.type = t
    
    def setCapacity(self, c= "") :
        self.capacity = c
        
    def setPrice(self, p = 0) :
        self.price = p
        
    def getType(self) :
        return self.type
    
    def getCapacity(self) :
        return self.capacity
    
    def getPrice(self) :
        return self.price
    
    def output(self) :
        print("Disk                         : " + str(self.getType()) + " " + str(self.getCapacity()))
        print("Price                        : " + str(self.getPrice()))
        
    
    
        
    