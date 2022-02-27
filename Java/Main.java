import java.util.*;

public class Main{
    public static void main (String[] args){
        int n = 0;
        /*Set secara hardcode*/
        Processor Pro = new Processor();
        Pro.setName("Ryzen 5");
        Pro.setPrice(4300000);
        Disk dizk = new Disk();
        dizk.setType("SSD");
        dizk.setCapacity("1TB");
        dizk.setPrice(1400000);
        RAM sticks = new RAM();
        sticks.setCapacity("16GB");
        sticks.setPrice(1200000);
        PC Kom = new PC(Pro, dizk, sticks);

        //input dinamis PC kedua dan seterusnya
        System.out.println("Masukkan Jumlah PC: ");
        Scanner sc = new Scanner(System.in);
        try{
            n = sc.nextInt();
        }catch(Exception e){}

        PC[] uPC = new PC[n];

        int i = 0;

        for (i = 0; i < n; i++){
            //antisipasi nextLine skip
            if (i == 0) sc.nextLine();
            
            System.out.println("Masukkan Nama Processor: "); String nama = sc.nextLine();
            System.out.println("Masukkan Type Penyimpanan: "); String type = sc.nextLine();
            System.out.println("Masukkan Kapasitas Penyimpanan: "); String kapasitasDisk = sc.nextLine();
            System.out.println("Masukkan Kapasitas RAM: "); String kapasitasRAM = sc.nextLine();
            System.out.println("Masukkan Harga Processor: "); int hargaPro = sc.nextInt();
            System.out.println("Masukkan Harga Penyimpanan: "); int hargaDisk = sc.nextInt();
            System.out.println("Masukkan Harga RAM: "); int hargaRAM = sc.nextInt();

            //inisiasi setiap objek pada array
            Processor uPro = new Processor(nama, hargaPro);
            Disk uDisk = new Disk(type, kapasitasDisk, hargaDisk);
            RAM uRAM = new RAM(kapasitasRAM, hargaRAM);

            uPC[i] = new PC(uPro, uDisk, uRAM);
        }

        //output data HC
        System.out.printf("===== PC Hardcode =====");
        Kom.outs();
        //output dengan prosedur
        for (i = 0; i < n; i++){
            System.out.printf("===== %d =====", (i+1));
            uPC[i].outs();
        }
    }
}
