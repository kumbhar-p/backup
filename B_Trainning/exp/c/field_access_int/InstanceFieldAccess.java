class InstanceFieldAccess {
    private int str;

    static {
        System.loadLibrary("FieldAccess");
    }

    private native void accessField();

    public static void main(String[] args) {
    InstanceFieldAccess f = new InstanceFieldAccess();
    f.str = 2;
    f.accessField();
    System.out.println("In java\n");
    System.out.println("f.str = " + f.str);
    }
}
        
