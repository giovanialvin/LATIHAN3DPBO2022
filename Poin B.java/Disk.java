public class Disk {
    //atribut
    private String type;
    private String capacity;
    private int price;

    //konstruktor
    public Disk(String type, String capacity, int price) {
        this.type = type;
        this.capacity = capacity;
        this.price = price;
    }
    public Disk() {
    }


    //get set methods
    public int getPrice() {
        return price;
    }
    public String getType() {
        return type;
    }
    public void setType(String type) {
        this.type = type;
    }
    public String getCapacity() {
        return capacity;
    }
    public void setCapacity(String capacity) {
        this.capacity = capacity;
    }
    public void setPrice(int price) {
        this.price = price;
    }

    //output
    public void output(){
        System.out.println("Disk                    : " + this.getType() + " " + this.getCapacity());
        System.out.println("Price                   : " + this.getPrice());
    }

    
    
}
