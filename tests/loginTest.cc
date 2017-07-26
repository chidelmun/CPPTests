#include <testframework.h>
#include <iostream>
using namespace TEST;




Assert::Testframework.test(login,"username", "password", true, ret);

Assert::Testframework.test(signup, "username", true, ret);

Assert::Testframework::runAll();
