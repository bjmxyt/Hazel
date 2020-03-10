#include "Application.h"
#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Hazel{


	Application::Application()
	{

	}

	Application::~Application()
	{

	}



	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			HZ_INFO("APP");
		}
		while (1);
	}


}
