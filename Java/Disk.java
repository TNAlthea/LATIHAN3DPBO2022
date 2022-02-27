class Disk{
    private String type;
    private String capacity;
    private int price;

    public Disk(String type, String capacity, int price){
        this.type = type;
        this.capacity = capacity;
        this.price = price;
    }

    public Disk(){
    }

    public String getType(){
        return type;
    }
    
    public void setType(String type){
        this.type = type;
    }

    public String getCapacity(){
        return capacity;
    }

    public void setCapacity(String capacity){
        this.capacity = capacity;
    }

    public int getPrice(){
        return price;
    }

    public void setPrice(int price){
        this.price = price;
    }

    public void outs(){
        System.out.println("Tipe Penyimpanan: " + this.getType());
        System.out.println("Kapasitas Penyimpanan: " + this.getCapacity());
        System.out.println("Harga Penyimpanan: " + this.getPrice());
    }
}