#pragma once

#include "Core.h"

namespace Hazel
{

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};

	// To be defined in client
	Application* CreateApplication();
}
	
