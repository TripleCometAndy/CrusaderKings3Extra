#pragma once

class GenerateRandomCrusaderKingsWorld {
  public:
    GenerateRandomCrusaderKingsWorld();

    virtual ~GenerateRandomCrusaderKingsWorld(){};

    virtual void generateRandomWorld() = 0;
};