#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hael Engine is fired Up and Ready to GOOOO!");
	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
}


#else
#error HAZEL only supports windows!
#endif