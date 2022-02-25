public class PC {
    private Processor p;
    private Disk d;
    private RAM r;
    private int totalPrice;


    
    public PC(Processor p, Disk d, RAM r) {
        this.p = p;
        this.d = d;
        this.r = r;
        this.totalPrice = p.getPrice() + d.getPrice() + r.getPrice();

    }
    public int getTotalPrice() {
        return totalPrice;
    }
    public void setTotalPrice(Processor p, Disk d, RAM r) {
        this.totalPrice = p.getPrice() + d.getPrice() + r.getPrice();
    }
    public PC() {
    }
    public RAM getR() {
        return r;
    }
    public Processor getP() {
        return p;
    }
    public void setP(Processor p) {
        this.p = p;
    }
    public Disk getD() {
        return d;
    }
    public void setD(Disk d) {
        this.d = d;
    }
    public void setR(RAM r) {
        this.r = r;
    }

    void output(){
        p.output();
        d.output();
        r.output();
        System.out.println("-------------------------------------+");
        System.out.println("Total Price             : " + this.getTotalPrice());
    }


}
