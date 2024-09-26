#include <iostream>
#define count 20
using namespace std;

class Student
{
	string name;
	int id;
	int marks;

public:
	Student(string s, int i, int m)
	{
		name = s;
		id = i;
		marks = m;
	}

	void setData(string s, int i, int m)
	{
		name = s;
		id = i;
		marks = m;
	}

	int getMarks()
	{
		return marks;
	}
};

int main()
{
	float avg;
	Student students[count] = {
		Student("Afsara", 421, 89),
		Student("Surayea", 422, 89),
		Student("Maria", 402, 91),
		Student("Shumi", 404, 90),
		Student("Tamanna", 406, 97),
		Student("Nusrat", 111, 81),
		Student("Fatema", 107, 80),
		Student("Khadiza", 119, 83),
		Student("Risa", 438, 95),
		Student("Redowan", 338, 94),
		Student("Manzirul", 358, 92),
		Student("Arefin", 347, 97),
		Student("Hakim", 360, 98),
		Student("Rahul", 340, 82),
		Student("Shawon", 357, 82),
		Student("Saif", 361, 84),
		Student("Khairul", 344, 81),
		Student("Mahir", 323, 80),
		Student("John", 331, 87),
		Student("Fikrat", 328, 88)};

	for (int i = 0; i < count; i++)
		avg += (float)students[i].getMarks();
	avg /= count;

	cout << "Average marks of " << count << " students: " << avg << endl;
	return 0;
}