class Processor():
    #private members
    __name = "Lorem 3000"
    __price = 1000

    #Construct
    def __init__(self, name = "lorem", price = 1000):
        self.__name = name
        self.__price = price

    #Get-set
    def setName(self, name):
        self.__name = name

    def getName(self):
        return self.__name

    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price

    #Print Output
    def outs(self):
        print("Nama Processor: %s" % self.__name)
        print("Harga Processor: %d" % self.__price)

    
