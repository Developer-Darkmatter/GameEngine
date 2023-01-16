#include "Application.h"

namespace GameEngine
{
    __declspec(dllimport) void Print();
}

void main()
{
    GameEngine::Print();
}
