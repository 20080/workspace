#include<iostream>
#include<vector>
using namespace std;

bool kLengthApart(vector<int>& nums, int k) {
	int s = nums.size();
	int tik = 10e6;
	bool sw = false;
	int counts = 10e6;//for counting zero set it to zero..

	//commneted area counting zeros and uncommented area is counting zeros as solution
	for (int i = 0; i < s; i++) {

		if (nums[i]) {
			tik = counts > tik ? tik : counts;
			counts = 0;
		}
		else {
			counts++;
		}

		// // if (i < s - 1 && nums[i] && nums[i + 1] && k > 0)
		// // 	return false;

		// if (!nums[i])
		// {
		// 	counts++;
		// }
		// else {
		// 	if (counts > 0) {
		// 		tik = counts < tik ? counts : tik;
		// 		counts = 0;

		// 	}


		// }
	}
	return (tik >= k);
}


int main() {

	freopen("input.txt", "r", stdin);

	vector<int> nums = {1, 0 , 0, 1, 0, 0, 1, 0, 0};
	int K = 2;
	cout << kLengthApart(nums, K) << endl;



}