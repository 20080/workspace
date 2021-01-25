import java.util.*;

class Main {
	public static void main(String args[] ) throws Exception {

		new1 n = new new1();

		n.display();


	}

}

class news {
	public void display() {
		System.out.print("Main");
	}
}

class new1 extends news {
	public void display() {
		super.display();
		System.out.print("Sub");
	}
}
