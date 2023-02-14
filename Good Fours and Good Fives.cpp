#include <iostream>
using namespace std;

int main() {
	int n = 0, remainder = 0, ways = 0;
	cin >> n;

	switch (n % 20) {
	case 4:
		ways++;
		break;
	case 5:
		ways++;
		break;
	case 8:
		ways++;
		break;
	case 9:
		ways++;
		break;
	case 10:
		ways++;
		break;
	case 12:
		ways++;
		break;
	case 13:
		ways++;
		break;
	case 14:
		ways++;
		break;
	case 15:
		ways++;
		break;
	case 16:
		ways++;
		break;
	case 17:
		ways++;
		break;
	case 18:
		ways++;
		break;
	case 19:
		ways++;
		break;
	case 20:
		ways += 2;
		break;
	default:
		break;
	}

	if (n > 20) {
		if (n % 20 == 0) {
			ways++;
		}
		remainder = n % 20;
		ways += (n - remainder) / 20;
	}

	cout << ways;
}