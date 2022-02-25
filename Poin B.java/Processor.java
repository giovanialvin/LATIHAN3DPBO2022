public class Processor {
    //atribut
    private String name;
    private int price;

    //konstruktor
    public Processor(String name, int price) {
        this.name = name;
        this.price = price;
    }
    public Processor() {
    }

    //get set methods
    public int getPrice() {
        return price;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public void setPrice(int price) {
        this.price = price;
    }

    //output
    public void output(){
        System.out.println("Processor               : " + this.getName());
        System.out.println("Price                   : " + this.getPrice());
    }

    
    
}
