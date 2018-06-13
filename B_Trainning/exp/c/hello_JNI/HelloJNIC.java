public class HelloJNIC {
    static {
        System.loadLibrary("HelloWorld");
    }

    // Native method declaration
    private native void sayHello();

    // Test Driver
    public static void main(String[] args) {
        new HelloJNIC().sayHello();  // Invoke native method
    }
}
