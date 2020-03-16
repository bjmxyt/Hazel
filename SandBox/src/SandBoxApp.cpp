#include <Hazel.h>

class ExampleLayer : public Hazel::Layer
{
public:
	ExampleLayer()
		:Layer("Example")
	{

	}

	void OnUpdate() override
	{
	}
	void OnEvent(Hazel::Event& event) override
	{
		HZ_INFO("{0}", event);
	}
};

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverLay(new Hazel::ImGuiLayer());
	}

	~Sandbox()
	{
		
	}
};

Hazel::Application* Hazel::CreatApplication()
{
	return new Sandbox();
}