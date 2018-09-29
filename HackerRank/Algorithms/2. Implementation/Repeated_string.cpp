// Complete the repeatedString function below.
long repeatedString(string s, long n)
{
	int str_size = s.length();
	long total_count = 0;
	if (n > str_size) {
		for (int i = 0; i < str_size; ++i) {
			if (s[i] == 'a') {
				++total_count;
			}
		}
		total_count *= (n / str_size);
		n %= str_size;
	}
	for (int i = 0; i < str_size && i < n; ++i) {
		if (s[i] == 'a') {
			++total_count;
		}
	}
	return total_count;
}