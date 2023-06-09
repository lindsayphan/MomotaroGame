#include "../source/statsOutput.cpp"
#include "../headers/character.hpp"
#include "../headers/momotaro.hpp"
#include "../headers/monkey.hpp"
#include "../headers/dog.hpp"
#include "../headers/bird.hpp"
#include "gtest/gtest.h"
#include <vector>

TEST(statsOutputTest, printStats1) {
    StatsOutput statsOut;
    Momotaro *testMomotaro = new Momotaro();
    testMomotaro->setAnimal("BIRD");
    Dog *testDog = new Dog();
    Monkey *testMonkey = new Monkey();
    Bird *testBird = new Bird();
    statsOut.printStats(testMomotaro, testDog, testMonkey, testBird);
}

TEST(statsOutputTest, printStatslessHealth) {
    StatsOutput statsOut;
    Momotaro *testMomotaro = new Momotaro("Momotaro", 20, 10, 5);
    testMomotaro->setHP(12);
    testMomotaro->setAnimal("BIRD");
    Dog *testDog = new Dog("Dog", 10, 5, 5);
    testDog->setHP(0);
    Monkey *testMonkey = new Monkey("Monkey", 10, 7, 3);
    testMonkey->setHP(7);
    Bird *testBird = new Bird("Bird", 10, 2, 8);
    testBird->setHP(5);
    statsOut.printStats(testMomotaro, testDog, testMonkey, testBird);
}