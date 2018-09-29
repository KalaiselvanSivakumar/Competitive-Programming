// Complete the howManyGames function below.
int howManyGames(int p, int d, int m, int s) {
	// Return the number of games you can buy
	int total_games = 0;

	if (s >= p) {
		++total_games;
	}
	s -= p;
	p -= d;

	while (s > 0) {
		if (p < m) {
			p = m;
		}
		if (s >= p) {
			++total_games;
		}
		s -= p;
		p -= d;
	}
	return total_games;
}