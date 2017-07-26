#include <iostream>


using namespace std;

struct API{

	void (*function_name);
	void (*arg);

}


class Tests{
public:
	Tests();
	bool run(String testName){
		tests[testname].run();
	}

	bool runAll(){
		for(auto it = tests.begin(); it!=tests.end(); ++it){
			*it.run();
		}
	}


private:
	List<Test> tests;


}



class Test{
public:
	bool run();

}