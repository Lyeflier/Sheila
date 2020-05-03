#include <Sheila.h>

class Sandbox : public Sheila::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Sheila::Application* Sheila::CreateApplication()
{
	return new Sandbox();
}