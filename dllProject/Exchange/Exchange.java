import java.util.*;
public class Exchange{
	static {
      System.loadLibrary("Exchange");	  
    }
	private native Hashtable getMailbox();
	public void print(Hashtable hashtable){
		Set entrySet = hashtable.entrySet();
		Iterator it = entrySet.iterator();
		System.out.println("Hashtable entries : ");
		while(it.hasNext()){
			System.out.println(pair.getKey() +" = "+pair.getValue());
		}
	}
	public static void main(String []args){
		System.out.println("Start of main()");
		Exchange exchange = new Exchange();
		Hashtable ex = exchange.getMailbox();
		System.out.println("End of main()");
	}
}