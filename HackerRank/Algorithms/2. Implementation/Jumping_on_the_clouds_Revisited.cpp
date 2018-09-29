// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c, int k)
{
	int energy = 100;
	int new_position = 0, total_position = -1, i = 0, size = c.size();
	while (energy && total_position < size) {
		new_position = (i + k) % size;
		total_position = i + k;
		i = new_position;
		energy -= c[new_position] ? 3 : 1;
	}
	return energy;
}