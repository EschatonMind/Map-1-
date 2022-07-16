#include <iostream>
#include <map>
using namespace std;

int main() {
	//--------------------------- declaring a map

	map<string, string> Name;
	string name;
	string family;

	//--------------------------- inserting " pairs " to map

	while (Name.size() != 5) {
		cin >> name;
		cin >> family;
		Name.insert(pair< string, string >(name, family));
	}

	//--------------------------- setting up an iterator

	map<string, string>::iterator it = Name.begin();

	//--------------------------- printing results

	for (it; it != Name.end(); ++it) {

		cout << " | " << it->first << " | " << it->second;
	}
	cout << endl;

	//--------------------------- assigning the elements from name to Name2

	map<string, string> Name2(Name.begin(), Name.end());

	//--------------------------- setting up an iterator for Name2

	map<string, string>::iterator it2 = Name2.begin();

	//--------------------------- printing results

	for (it2; it2 != Name2.end(); ++it2) {

		cout << " | " << it2->first << " | " << it2->second;
	}
	cout << endl;

	//--------------------------- checking to see if something pertecular exists

	if (Name2.find("A") != Name2.end()) {

		cout << Name2["A"] << endl;
	}
	else {
		cout << " No such key found : " << endl;
	}

	return 0;
}