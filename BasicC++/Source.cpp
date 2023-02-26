#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

double metrs(double val, string unit) {
	const double cm_to_m = 0.01;
	const double in_to_m = cm_to_m * 2.54;
	const double ft_to_m = in_to_m * 12;

	if (unit == "cm") {
		return val * cm_to_m;
	}
	else if (unit == "in") {
		return val * in_to_m;
	}
	else if (unit == "ft") {
		return val * ft_to_m;
	}
	else {
		return val;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	vector<double>vals;
	double val;
	string unit;
	while (true)
	{
		cout << "ведіть значеня в см наприклад(10 см)" << endl;
		cin >> val >> unit;
		if (val == 0) {
			break;

		}
		double val_m = metrs(val, unit);
		vals.push_back(val_m);
		cout << "введино значення " << val << "m" << endl;
		if (vals.size() == 1) {
			cout << "Это первое введенное значение." << endl;
		}
		else {
			double max = *max_element(vals.begin(), vals.end());
			double min = *min_element(vals.begin(), vals.end());
			cout << "Наименьшее среди введенных: " << min << " м" << endl;
			cout << "Наибольшее среди введенных: " << max << " м" << endl;
			if (max - min < 1.0) {
				cout << "Числа почти равны" << endl;
			}
		}

	}

}