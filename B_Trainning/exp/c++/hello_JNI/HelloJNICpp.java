public class HelloJNICpp {
    static {
//        try {
            System.loadLibrary("hello"); // hello.dll (Windows) or libhello.so (Unixes)
  //      }
    //    catch(UnsatisfiedLinkError e) {
      //      System.out.println("Failed to load lib");
        //    System.out.println(e.getMessage());
        }

    // Native method declaration
    private native void sayHello();

    //        // Test Driver
    public static void main(String[] args) {
        new HelloJNICpp().sayHello();  // Invoke native method
    }
}
