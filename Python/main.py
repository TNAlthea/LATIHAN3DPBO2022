from Processor import Processor
from Disk import Disk
from RAM import RAM
from PC import PC

# set menggunakan cons dan setter secara hard code
Pro = Processor("Ryzen 5", 4300000)

Sto = Disk()
Sto.setType("SSD")
Sto.setCapacity("1TB")
Sto.setPrice(1300000)

Memo = RAM()
Memo.setCapacity("16GB")
Memo.setPrice(1400000)

Kom = PC(Pro, Sto, Memo)

# set secara dinamis
n = int(input("Input Jumlah PC: "))
uPC = [PC() for i in range(n)]

i = 0
for i in range(n):
    namaPro = input("Masukkan nama processor: ")
    hargaPro = int(input("Masukkan harga processor: "))
    tipeDisk = input("Masukkan tipe penyimpanan: ")
    kapaDisk = input("Masukkan kapasitas penyimpanan: ")
    hargaDisk = int(input("Masukkan harga penyimpanan: "))
    kapaRAM = input("Masukkan kapasitas RAM: ")
    hargaRAM = int(input("Masukkan harga RAM: "))

    uPro = Processor(namaPro, hargaPro)
    uSto = Disk(tipeDisk, kapaDisk, hargaDisk)
    uRAM = RAM(kapaRAM, hargaRAM)

    uPC[i] = PC(uPro, uSto, uRAM)

#OUTPUT
print("OUTPUT")
print("PC 'HC'")
Kom.outs()
print("PC user")
i = 0
for i in range(n):
    print("\nPC ke %d" % (i + 1))
    uPC[i].outs()


