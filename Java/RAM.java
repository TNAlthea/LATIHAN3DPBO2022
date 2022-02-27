class RAM{
    private String capacity;
    private int price;

    public RAM(String capacity, int price){
        this.capacity = capacity;
        this.price = price;
    }

    public RAM(){
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
        System.out.println("Kapasitas RAM: " + this.getCapacity());
        System.out.println("Harga RAM: " + this.getPrice());
    }
}