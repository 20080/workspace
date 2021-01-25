class add implements Runnable {
	int a1, b1;
	String s1;
	public add(String s, int a, int b) {
		s1 = s;
		a1 = a;
		b1 = b;
	}
	public void run() {

		System.out.println("\nSuraj Kumar \nCSE-A \n129");
		System.out.println(s1 + " " + (a1 + b1));
	}

}
class subtract implements Runnable {
	int a1, b1;
	String s1;
	public subtract(String s, int a, int b) {
		s1 = s;
		a1 = a;
		b1 = b;
	}
	public void run() {
		System.out.println(s1 + " " + (a1 - b1));
	}
}
class mul implements Runnable {
	String s1;
	int a1, b1;
	public mul(String s, int a, int b) {
		s1 = s;
		a1 = a;
		b1 = b;
	}
	public void run() {
		System.out.println(s1 + " " + (a1 * b1));
	}
}
class div implements Runnable {
	int a1, b1;
	String s1;
	public div(String s, int a, int b) {
		s1 = s;
		a1 = a;
		b1 = b;
	}
	public void run() {
		System.out.println(s1 + " " + (a1 / b1));
	}
}
public class Main {
	public static void main(String args[]) {


		Runnable r1 = new add("\nAdding nos:", 12, 2);
		Runnable r2 = new subtract("\nSubtracting nos:", 12, 2);
		Runnable r3 = new mul("\nMutliplying nos:", 12, 2);
		Runnable r4 = new div("\nDividing nos:", 12, 2);

		Thread add = new Thread(r1);
		Thread subtract = new Thread(r2);
		Thread mul = new Thread(r3);
		Thread div = new Thread(r4);

		add.start();
		subtract.start();
		mul.start();
		div.start();


	}
}