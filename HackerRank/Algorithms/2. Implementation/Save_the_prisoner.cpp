// Complete the saveThePrisoner function below.
int saveThePrisoner(int n, int m, int s) {
	int prisoner_no;
	m = m % n;
	if (m == 0) {
		prisoner_no = s - 1;
		if (prisoner_no == 0) {
			prisoner_no = n;
		}
	}
	else {
		prisoner_no = s + m - 1;
		if (prisoner_no > n) {
			prisoner_no -= n;
		}
	}
	return prisoner_no;
}