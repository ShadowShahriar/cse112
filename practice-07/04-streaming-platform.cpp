#include <iostream>
using namespace std;

class Movie;
class StreamingPlatform
{
public:
	void displayRating(Movie movie);
};

class Movie
{
	string title;
	float rating;
	friend void StreamingPlatform::displayRating(Movie movie);

public:
	Movie(string t, float r)
	{
		title = t;
		rating = r;
	}
};

void StreamingPlatform::displayRating(Movie movie)
{
	cout << movie.rating;
}

int main()
{
	Movie featured("The Wild Robot", 4.5);
	StreamingPlatform netflix;
	netflix.displayRating(featured);
	return 0;
}