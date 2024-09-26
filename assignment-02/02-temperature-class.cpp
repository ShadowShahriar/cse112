#include <iostream>
using namespace std;

class Temperature
{
	float celsius, fahrenheit;

public:
	Temperature(float C) : celsius(C)
	{
	}

	void setTempF(float F)
	{
		fahrenheit = F;
	}

	float getTempC()
	{
		return celsius;
	}

	float getTempF()
	{
		return fahrenheit;
	}
};

inline float convertToFahrenheit(float C)
{
	return (C * 9 / 5) + 32;
}

int main()
{
	Temperature t1(37);
	float celsius = t1.getTempC();
	float fahrenheit = convertToFahrenheit(celsius);
	t1.setTempF(fahrenheit);

	cout << "Celsius   : " << celsius << "°C" << endl;
	cout << "Fahrenheit: " << t1.getTempF() << "°F" << endl;
	return 0;
}