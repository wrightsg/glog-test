#include "glog/logging.h"

int main(int argc, char** argv)
{
	google::InitGoogleLogging(argv[0]);

	LOG(INFO) << "Hello world!";

	return EXIT_SUCCESS;
}