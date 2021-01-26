import java.util.Scanner;


class Demo implements Runnable {
	private Thread t;
	private String threadName;

	Demo(String threadName) {
		this.threadName = threadName;
	}

	public void run() {
		while (true)
			System.out.print(threadName);
	}
	public void start() {
		if (t == null) {
			t = new Thread(this, threadName);
			t.start();
		}
	}
}


class help extends Adder implements BaseI {
	public static void main(String[] args) {

		Demo a = new Demo("A");
		Demo b = new Demo("B");
		b.start();
		a.start();

	}
}