#include "Hazel.h"

class SandboxApp : public Hazel::Application
{
};

Hazel::Application* Hazel::CreateApplication()
{
    return new SandboxApp();
}
