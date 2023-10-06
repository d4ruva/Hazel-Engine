#include "hzpch.h"
#include "Application.h"

#include "Hazel/Events/ApplicationEvent.h"
#include "Hazel/Log.h"

#include<GLFW/glfw3.h>

namespace Hazel {
	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application()
	{
	}

	void Application::run()
	{
		while (m_Running)
		{
			m_Window->OnUpdate();
			glClear(GL_COLOR_BUFFER_BIT);
			glClearColor(1, 0, 1, 1);
		}
	}

}