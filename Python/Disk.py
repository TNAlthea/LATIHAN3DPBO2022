class Disk():
    #private members
    __type = "HDD SSD"
    __capacity = "Lorem 3000"
    __price = 1000

    #Construct
    def __init__(self, type = "lorem", capacity = "ipsum", price = 1000):
        self.__type = type
        self.__capacity = capacity
        self.__price = price

    #Get-set
    def setType(self, type):
        self.__type = type

    def getType(self):
        return self.__type

    def setCapacity(self, capacity):
        self.__capacity = capacity

    def getCapacity(self):
        return self.__capacity

    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price

    #Print Output
    def outs(self):
        print("Jenis Penyimpanan: %s" % self.__type)
        print("Kapasitas Penyimpanan: %s" % self.__capacity)
        print("Harga Penyimpanan: %d" % self.__price)
