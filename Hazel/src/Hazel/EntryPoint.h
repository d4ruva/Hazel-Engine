#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	HZ_INFO("Initialized Client");

	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
}


#else
#error HAZEL only supports windows!
#endif