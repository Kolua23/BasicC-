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
		cout << "����� ������� � �� ���������(10 ��)" << endl;
		cin >> val >> unit;
		if (val == 0) {
			break;

		}
		double val_m = metrs(val, unit);
		vals.push_back(val_m);
		cout << "������� �������� " << val << "m" << endl;
		if (vals.size() == 1) {
			cout << "��� ������ ��������� ��������." << endl;
		}
		else {
			double max = *max_element(vals.begin(), vals.end());
			double min = *min_element(vals.begin(), vals.end());
			cout << "���������� ����� ���������: " << min << " �" << endl;
			cout << "���������� ����� ���������: " << max << " �" << endl;
			if (max - min < 1.0) {
				cout << "����� ����� �����" << endl;
			}
		}

	}

}