#pragma once

#ifdef SH_PLATFORM_WINDOWS

extern Sheila::Application* Sheila::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Sheila::CreateApplication();
	app->Run();
	delete app;
}

#endif
