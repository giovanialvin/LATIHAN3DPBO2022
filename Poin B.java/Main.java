public class Main {
    public static void main(String[] args) {
        //Input mode 1
        Processor p = new Processor("AMD Ryzen 1", 150000);
        Disk d = new Disk("HDD", "500 GB", 500);
        RAM r =  new RAM("4 GB", 50);
        PC unit1 = new PC(p, d, r);
        //output
        System.out.println("======================================");
        unit1.output();
        System.out.println("======================================");

        //input Mode 2
        Processor p2 = new Processor();
        p2.setName("AMD Ryzen 5");
        p2.setPrice(6500);
        
        Disk d2 = new Disk();
        d2.setType("SSD");
        d2.setCapacity("1 TB");
        d2.setPrice(1425);

        RAM r2 = new RAM();
        r2.setCapacity("16 GB");
        r2.setPrice(12345);
        
        PC unit2 = new PC();
        unit2.setP(p2);
        unit2.setD(d2);
        unit2.setR(r2);
        unit2.setTotalPrice(p2, d2, r2);
        System.out.println("======================================");
        unit2.output();
        System.out.println("======================================");

    }    
}
