#include "GenerateRandomProvinceMap.h"
#include "gtest/gtest.h"

class MockGenerateRandomProvinceMap : public GenerateRandomProvinceMapImpl {
  public:
    MOCK_METHOD(void, generateRandomProvinceMap, (), (override));
};