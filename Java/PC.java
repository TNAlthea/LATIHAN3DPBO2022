class PC{
    private Processor procie;
    private Disk storage;
    private RAM stick;
    private int totalPrice;

    public PC(Processor procie, Disk storage, RAM stick){
        this.procie = procie;
        this.storage = storage;
        this.stick = stick;
    }

    public PC(){
    }

    public Processor getProcessor(){
        return procie;
    }

    public void setProcessor(Processor procie){
        this.procie = procie;
    }

    public Disk getDisk(){
        return storage;
    }

    public void setDisk(Disk storage){
        this.storage = storage;
    }

    public RAM getRAM(){
        return stick;
    }

    public void setRAM(RAM stick){
        this.stick = stick;
    }

    public int getTotalPrice(){
        return totalPrice;
    }

    public void setTotalPrice(){
        this.totalPrice = procie.getPrice() + storage.getPrice() + stick.getPrice();
    }

    public void outs(){
        procie.outs();
        storage.outs();
        stick.outs();
        setTotalPrice();
        System.out.println("Harga total: " + this.getTotalPrice());
    }
}