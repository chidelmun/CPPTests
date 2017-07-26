#include <iostream>
#include <string>

using namespace std;

bool login(string username, string pwd){
	cout << "Testing Login " << endl;
	return false;
}

template <typename T>
static bool Assert(T function_name, string expected, string actual){
	function_name(expected,actual);
	cout << "FAILED" << endl;
	return false;

}



int main(int argc, char const *argv[])
{
	Assert(&login, "root", "root");
	return 0;
}