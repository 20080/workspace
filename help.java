import java.util. *;
class help {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int a [] = {1, 7, 6, 5};
		int b[] = {3, 3, 3, 1};

		System.out.println(solve(a, b));



	}

	static int solve(int a[], int b[]) {
		int ans = 0;

		if (a.length == 1)
			return 0;

		int reducer = 0;

		for (int i = 0; i < b.length ; i++) {
			if (i == 0) {
				reducer += b[i];
				continue;
			}
			if (a[i] - reducer < 0) {
				ans++;
			} else {
				reducer += b[i];
			}

		}
		return ans;



	}

}