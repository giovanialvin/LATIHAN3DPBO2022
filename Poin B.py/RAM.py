class RAM:
    #atribut
    capacity = ""
    price = 0
    
    
    def __init__(self, c = "", p = 0) :
        self.capacity = c
        self.price = p
        
    def setCapacity(self, c= "") :
        self.capacity = c
        
    def setPrice(self, p = 0) :
        self.price = p
        
    def getCapacity(self) :
        return self.capacity
    
    def getPrice(self) :
        return self.price
    
    def output(self) :
        print("RAM                          : " + str(self.getCapacity()))
        print("Price                        : " + str(self.getPrice()))
        
    
    
        
    