class Processor{
    private String name;
    private int price;

    public Processor(String name, int price){
        this.name = name;
        this.price = price;
    }

    public Processor(){
    }

    public String getName(){
        return name;
    }
    
    public void setName(String name){
        this.name = name;
    }

    public int getPrice(){
        return price;
    }

    public void setPrice(int price){
        this.price = price;
    }

    public void outs(){
        System.out.println("\nNama Processor: " + this.getName());
        System.out.println("Harga Processor: " + this.getPrice());
    }
}