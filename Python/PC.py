from platform import processor
from Processor import Processor
from Disk import Disk
from RAM import RAM

class PC():
    #private members
    __totalPrice = 1000
    __procie = Processor()
    __storage = Disk()
    __stick = RAM()

    #Construct
    def __init__(self, procie = Processor(), storage = Disk(), stick = RAM()):
        self.__procie = procie
        self.__storage = storage
        self.__stick = stick

    #Get-set
    def setProcessor(self, procie):
        self.__procie = procie

    def getProcessor(self):
        return self.__procie

    def setDisk(self, storage):
        self.__storage = storage

    def getDisk(self):
        return self.__storage

    def setRAM(self, stick):
        self.__stick = stick
    
    def getRAM(self):
        return self.__stick

    #menghitung total harga dari kelas yang bersangkutan
    def setTotalPrice(self):
        self.__totalPrice = self.__procie.getPrice() + self.__storage.getPrice() + self.__stick.getPrice()

    def getTotalPrice(self):
        return self.__totalPrice

    #Print output
    def outs(self):
        self.__procie.outs()
        self.__storage.outs()
        self.__stick.outs()
        self.setTotalPrice()
        print("TOTAL Harga: %d" % self.__totalPrice)

    
