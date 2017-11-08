#include <log4cxx/logger.h>
#include <log4cxx/logstring.h>
#include <log4cxx/propertyconfigurator.h>
int main(int argc, char* argv[])
{
    using namespace log4cxx;
    // 读取配置文件
    PropertyConfigurator::configure("log4cxx.cfg");
    // 建立两个logger
    LoggerPtr logger1 = Logger::getLogger("TraceYourName");
    LoggerPtr logger2 = Logger::getLogger("Patch");
    LOG4CXX_TRACE(logger1, "TRACE");
    LOG4CXX_WARN(logger1, "WARNING");
    LOG4CXX_DEBUG(logger1, "DEBUG");
    LOG4CXX_ASSERT(logger1, false, "ASSERT");
    LOG4CXX_FATAL(logger1, "FATAL");
    LOG4CXX_TRACE(logger2, "TRACE");
    LOG4CXX_ERROR(logger2, "ERROR");
    return 0;
}
