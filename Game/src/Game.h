#pragma once

#include <GameEngine.h>

union SDL_Event;
class Graphics;
class Shape;

class Game: public GameEngine
{
  friend class GameEngine;

public:
  ~Game();

protected:
  Game();

  void InitializeImpl();
  void UpdateImpl(float dt);
  void DrawImpl(Graphics *graphics, float dt);

  void Reset();
  void CalculateDrawOrder(std::vector<GameObject *>& drawOrder);

  Shape *shape;
};