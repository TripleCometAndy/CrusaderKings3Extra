#pragma once

class GenerateProvinceMap {
  public:
    GenerateProvinceMap();

    virtual ~GenerateProvinceMap(){};

    virtual void generateProvinceMap() = 0;
};