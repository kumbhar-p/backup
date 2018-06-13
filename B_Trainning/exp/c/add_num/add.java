public class add {
    static {
        System.loadLibrary("add");  
    }
    
    private native int add_(int a, int b);

    public static void main(String[] args) {
          System.out.print("In java addition is " + new add().add_(3, 2));
          System.out.print("\n");
    }
}
