#pragma once

#include "Core.h"

namespace Sheila {

	class  SHEILA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

