#include <iostream>
#include <vector>
using namespace std;

class Employee {
	public:
		Employee() = default;
		Employee(string name, int age): _name(name), _age(age) {}
		string getName() const {
			return this->_name;
		}
		int getAge() const {
			return this->_age;
		}
	private:
		string _name;
		int _age;
};

int main() {
	vector <Employee> vE;
	vE.emplace_back("John", 24);
	vE.emplace_back("Andy", 30);

	for (auto& e: vE)
		cout << e.getName() << " " << e.getAge() << endl;
	return 0;
}
