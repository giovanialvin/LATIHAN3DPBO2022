class Processor:
    #atribut
    name = ""
    price = 0
    
    #constructor
    def __init__(self, n = "", p = 0) :
        self.name = n
        self.price = p
    
    #get set methods
    def setName(self, n= "") :
        self.name = n
        
    def setPrice(self, p = 0) :
        self.price = p
        
    def getName(self) :
        return self.name
    
    def getPrice(self) :
        return self.price
    
    def output(self) :
        print("Processor                    : " + str(self.getName()))
        print("Price                        : " + str(self.getPrice()))
        
    
    
        
    