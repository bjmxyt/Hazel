#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Hazel {

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;
	
	void Log::Init()
	{
		//输出信息格式
		spdlog::set_pattern("%^[%T] %n: %v%$");
		//引擎端输出者名字为HAZEL
		s_CoreLogger = spdlog::stdout_color_mt("HAZEL");
		s_CoreLogger->set_level(spdlog::level::trace);

		//用户端输出者名字为APP
		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_CoreLogger->set_level(spdlog::level::trace);

	}

}