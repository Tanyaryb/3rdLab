#include <fstream>
#include "List.h"

class Bellman_Ford_algorithm
{
private:
	int amount_of_cities = 0, amount_of_edges = 0;
	List<List<char>> city;
	struct edge
	{
		int vertex1, vertex2, cost;
	};
	List<edge> edges;
	void swap(int&, int&);
public:
	void set_data();
	void set_data(string);
	void find_path(size_t, size_t);
	List<int> return_path(size_t, size_t);
};

