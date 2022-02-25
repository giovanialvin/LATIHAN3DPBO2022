public class RAM {

    //atribut
    private String capacity;
    private int price;

    //konstruktor
    public RAM(String capacity, int price) {
        this.capacity = capacity;
        this.price = price;
    }
    public RAM() {
    }


    //get set methods
    public int getPrice() {
        return price;
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
        System.out.println("RAM                     : " + this.getCapacity());
        System.out.println("Price                   : " + this.getPrice());
    }

    
    


}
