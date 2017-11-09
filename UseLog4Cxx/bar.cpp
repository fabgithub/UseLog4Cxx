// file bar.cpp
#include "com/foo/bar.h"

using namespace com::foo;
using namespace log4cxx;

LoggerPtr Bar::logger(Logger::getLogger("com.foo.bar"));

void Bar::doIt() {
    LOG4CXX_DEBUG(logger, "Did it again! Time is " << time(NULL) << " now.")
}
