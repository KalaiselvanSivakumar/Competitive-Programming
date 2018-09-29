// Complete the serviceLane function below.
vector<int> serviceLane(int n, vector<int> width, vector<vector<int>> cases) {
	int i, j;
	int start, end;
	int cases_size = cases.size();
	vector<int> max_width(cases_size);

	for(i = 0; i < cases_size; ++i) {
		start = cases[i][0];
		end = cases[i][1];
		max_width[i] = width[end];
		for (j = start; j < end; ++j) {
			if (max_width[i] > width[j]) {
				max_width[i] = width[j];
			}
		}
	}
	return max_width;
}
