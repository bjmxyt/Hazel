#pragma once
#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreatApplication();

int main(int argc, char** argv)
{
	//日志输出系统初始化
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Ldfdfog!");
	int a = 5;
	HZ_INFO("Hello! Var = {0}", a);

	auto app = Hazel::CreatApplication();
	app->Run();
	delete app;
}

#endif