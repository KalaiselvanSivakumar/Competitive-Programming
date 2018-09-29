// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c)
{
	int jumps = 0, size = c.size(), i = 0;
	while (i < size - 1) {
		if (i + 2 < size && c[i + 2] == 0) {
			i += 2;
		}
		else {
			++i;
		}
		++jumps;
		// cout << i << ' ' << jumps << '\n';
	}
	return jumps;
}