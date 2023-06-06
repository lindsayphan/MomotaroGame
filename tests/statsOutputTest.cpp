#include "../source/statsOutput.cpp"
#include "../source/character.cpp"
#include "../source/momotaro.cpp"
#include "../source/monkey.cpp"
#include "../source/dog.cpp"
#include "../source/bird.cpp"
#include "gtest/gtest.h"
#include <vector>

TEST(statsOutputTest, printStats1) {
    StatsOutput statsOut;
    Momotaro *testMomotaro = new Momotaro("Momotaro", 20, 20, 10, 5);
    testMomotaro->setAnimal("BIRD");
    Dog *testDog = new Dog("Dog", 10, 10, 5, 5);
    Monkey *testMonkey = new Monkey("Monkey", 10, 10, 7, 3);
    Bird *testBird = new Bird("Bird", 10, 10, 2, 8);
    statsOut.printStats(testMomotaro, testDog, testMonkey, testBird);
}

TEST(statsOutputTest, printStatslessHealth) {
    StatsOutput statsOut;
    Momotaro *testMomotaro = new Momotaro("Momotaro", 12, 20, 10, 5);
    testMomotaro->setAnimal("BIRD");
    Dog *testDog = new Dog("Dog", 0, 10, 5, 5);
    Monkey *testMonkey = new Monkey("Monkey", 3, 10, 7, 3);
    Bird *testBird = new Bird("Bird", 5, 10, 2, 8);
    statsOut.printStats(testMomotaro, testDog, testMonkey, testBird);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
