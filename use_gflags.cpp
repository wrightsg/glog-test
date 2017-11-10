#include "glog/logging.h"

int main(int argc, char** argv)
{
	gflags::ParseCommandLineFlags(&argc, &argv, true);
	google::InitGoogleLogging(argv[0]);

	LOG(INFO) << "Hello world!";
	LOG(INFO) << "Bye world...";

	return EXIT_SUCCESS;
}