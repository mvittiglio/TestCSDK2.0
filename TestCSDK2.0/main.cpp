#include <iostream>

#include <launchdarkly/client.h>
#include <launchdarkly/config.h>
#include <launchdarkly/user.h>

using std::cout;
using std::endl;

int main(int argc, char** args)
{
	cout << "Hello, World!" << endl;

	struct LDConfig* ldConfig = LDConfigNew("");
	struct LDUser* ldUser = LDUserNew("test@clib.com");
	struct LDClient* ldClient = LDClientInit(ldConfig, ldUser, 5000);

	return 0;
}