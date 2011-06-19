#include <rdbc/version.hpp>
#include <iostream>

int main()
{
	using namespace std;
	rdbc::version_t v = rdbc::version();
	cout << "Version: " << v.major << "." << v.minor << "." << v.micro << "." << v.build << endl;
	return 0;
}

