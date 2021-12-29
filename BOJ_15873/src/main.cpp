#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string l;
	cin >> l;

	auto n = l.length();
	if (2 == n) {
		auto a = l.substr(0, 1);
		auto ai = stoi(a);

		auto b = l.substr(1, 1);
		auto bi = stoi(b);

		cout << ai + bi;
	}
	else if (4 == n) {
		cout << 20;
	}
	else {
		if ('0' == l[1]) {
			auto a = l.substr(0, 2);
			auto ai = stoi(a);

			auto b = l.substr(2, 1);
			auto bi = stoi(b);

			cout << ai + bi;
		}
		else if ('0' == l[2]) {
			auto a = l.substr(0, 1);
			auto ai = stoi(a);

			auto b = l.substr(1, 2);
			auto bi = stoi(b);

			cout << ai + bi;
		}
	}

	return 0;
}