public class Addition {
	static {
      System.loadLibrary("addition"); 
    }
	private native int add(int a, int b);
	public static void main(String []args){
		System.out.println("Addition of 2 and 3 : "+(new Addition().add(2, 3)));
	}
}