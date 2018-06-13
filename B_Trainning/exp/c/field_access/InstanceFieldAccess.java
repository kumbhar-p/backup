class InstanceFieldAccess {
    private String str;

    static {
        System.loadLibrary("FieldAccess");
    }

    private native void accessField();

    public static void main(String[] args) {
    InstanceFieldAccess f = new InstanceFieldAccess();
    f.str = "abc";
    f.accessField();
    System.out.println("In java\n");
    System.out.println("f.str = " + f.str);
    }
}
        
