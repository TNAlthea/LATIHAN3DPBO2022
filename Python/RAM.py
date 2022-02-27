class RAM():
    #private members
    __capacity = "Lorem 3000"
    __price = 1000

    #Construct
    def __init__(self, capacity = "lorem", price = 1000):
        self.__capacity = capacity
        self.__price = price

    #Get-set
    def setCapacity(self, capacity):
        self.__capacity = capacity

    def getCapacity(self):
        return self.__capacity

    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price

    #Print output
    def outs(self):
        print("Kapasitas RAM: %s" % self.__capacity)
        print("Harga RAM: %d" % self.__price)

    
