#include "../source/swap.cpp"
#include "../headers/dog.hpp"
#include "../headers/monkey.hpp"
#include "../headers/bird.hpp"
#include "../headers/character.hpp"
#include "gtest/gtest.h"

using namespace std;

TEST(swapTest, swapGetAnswerNoThrow) {
    Swap testSwap;
    EXPECT_NO_THROW(testSwap.swapGetAnswer());
}

TEST(swapTest, swapSetAnswerd) {
    Swap testSwap;
    char testAnswer = 'd';
    testSwap.swapSetAnswer(testAnswer);
    EXPECT_EQ('d', testSwap.swapGetAnswer());
}

TEST(swapTest, swapSetAnswerm) {
    Swap testSwap;
    char testAnswer = 'm';
    testSwap.swapSetAnswer(testAnswer);
    EXPECT_EQ('m', testSwap.swapGetAnswer());
}

TEST(swapTest, swapSetAnswerb) {
    Swap testSwap;
    char testAnswer = 'b';
    testSwap.swapSetAnswer(testAnswer);
    EXPECT_EQ('b', testSwap.swapGetAnswer());
}

TEST(swapTest, swapPropmtNoThrow) {
    Swap testSwap;
    Dog *testDog = new Dog("Dog", 10, 5, 5);
    Monkey *testMonkey = new Monkey("Monkey", 10, 7, 3);
    Bird *testBird = new Bird("Bird", 10, 3, 3);
    EXPECT_NO_THROW(testSwap.swapChoicePrompt(testDog, testMonkey, testBird));
}

TEST(swapTest, propmtNoDog) {
    Swap testSwap;
    Dog *testDog = new Dog();
    testDog->setHP(0);
    Monkey *testMonkey = new Monkey("Monkey", 10, 7, 3);
    Bird *testBird = new Bird("Bird", 10, 3, 3);
    EXPECT_NO_THROW(testSwap.swapChoicePrompt(testDog, testMonkey, testBird));
}

TEST(swapTest, propmtNoMonkey) {
    Swap testSwap;
    Dog *testDog = new Dog("Dog", 10, 5, 5);
    Monkey *testMonkey = new Monkey("Monkey", 10, 7, 3);
    testMonkey->setHP(0);
    Bird *testBird = new Bird("Bird", 10, 3, 3);
    EXPECT_NO_THROW(testSwap.swapChoicePrompt(testDog, testMonkey, testBird));
}

TEST(swapTest, propmtNoBird) {
    Swap testSwap;
    Dog *testDog = new Dog("Dog", 10, 5, 5);
    Monkey *testMonkey = new Monkey("Monkey", 10, 7, 3);
    Bird *testBird = new Bird("Bird", 10, 3, 3);
    testBird->setHP(0);
    EXPECT_NO_THROW(testSwap.swapChoicePrompt(testDog, testMonkey, testBird));
}

TEST(swapTest, swapGetCurrentAnimalNoThrow) {
    Swap testSwap;
    EXPECT_NO_THROW(testSwap.swapGetCurrentAnimal());
}

TEST(swapTest, swapSetCurrentAnimald) {
    Swap testSwap;
    char testAnimal = 'd';
    testSwap.swapSetCurrentAnimal(testAnimal);
    EXPECT_EQ('d', testSwap.swapGetCurrentAnimal());
}

TEST(swapTest, swapSetAnimalm) {
    Swap testSwap;
    char testAnimal = 'm';
    testSwap.swapSetCurrentAnimal(testAnimal);
    EXPECT_EQ('m', testSwap.swapGetCurrentAnimal());
}

TEST(swapTest, swapSetAnimalb) {
    Swap testSwap;
    char testAnimal = 'b';
    testSwap.swapSetCurrentAnimal(testAnimal);
    EXPECT_EQ('b', testSwap.swapGetCurrentAnimal());
}

TEST(swapTest, swapDogDog) {
    Swap testSwap;
    testSwap.swapSetCurrentAnimal('d');
    testSwap.swapSetAnswer('d');
    testSwap.swapAnimals(testSwap.swapGetCurrentAnimal(), testSwap.swapGetAnswer());
    EXPECT_EQ('d', testSwap.swapGetCurrentAnimal());
}

TEST(swapTest, swapDogMonkey) {
    Swap testSwap;
    testSwap.swapSetCurrentAnimal('d');
    testSwap.swapSetAnswer('m');
    testSwap.swapAnimals(testSwap.swapGetCurrentAnimal(), testSwap.swapGetAnswer());
    EXPECT_EQ('m', testSwap.swapGetCurrentAnimal());
}

TEST(swapTest, swapDogBird) {
    Swap testSwap;
    testSwap.swapSetCurrentAnimal('d');
    testSwap.swapSetAnswer('b');
    testSwap.swapAnimals(testSwap.swapGetCurrentAnimal(), testSwap.swapGetAnswer());
    EXPECT_EQ('b', testSwap.swapGetCurrentAnimal());
}

TEST(swapTest, swapMonekyDog) {
    Swap testSwap;
    testSwap.swapSetCurrentAnimal('m');
    testSwap.swapSetAnswer('d');
    testSwap.swapAnimals(testSwap.swapGetCurrentAnimal(), testSwap.swapGetAnswer());
    EXPECT_EQ('d', testSwap.swapGetCurrentAnimal());
}

TEST(swapTest, swapMonkeyMonkey) {
    Swap testSwap;
    testSwap.swapSetCurrentAnimal('m');
    testSwap.swapSetAnswer('m');
    testSwap.swapAnimals(testSwap.swapGetCurrentAnimal(), testSwap.swapGetAnswer());
    EXPECT_EQ('m', testSwap.swapGetCurrentAnimal());
}

TEST(swapTest, swapMonkeyBird) {
    Swap testSwap;
    testSwap.swapSetCurrentAnimal('m');
    testSwap.swapSetAnswer('b');
    testSwap.swapAnimals(testSwap.swapGetCurrentAnimal(), testSwap.swapGetAnswer());
    EXPECT_EQ('b', testSwap.swapGetCurrentAnimal());
}

TEST(swapTest, swapBirdDog) {
    Swap testSwap;
    testSwap.swapSetCurrentAnimal('b');
    testSwap.swapSetAnswer('d');
    testSwap.swapAnimals(testSwap.swapGetCurrentAnimal(), testSwap.swapGetAnswer());
    EXPECT_EQ('d', testSwap.swapGetCurrentAnimal());
}

TEST(swapTest, swapBirdMonkey) {
    Swap testSwap;
    testSwap.swapSetCurrentAnimal('b');
    testSwap.swapSetAnswer('m');
    testSwap.swapAnimals(testSwap.swapGetCurrentAnimal(), testSwap.swapGetAnswer());
    EXPECT_EQ('m', testSwap.swapGetCurrentAnimal());
}

TEST(swapTest, swapBirdBird) {
    Swap testSwap;
    testSwap.swapSetCurrentAnimal('b');
    testSwap.swapSetAnswer('b');
    testSwap.swapAnimals(testSwap.swapGetCurrentAnimal(), testSwap.swapGetAnswer());
    EXPECT_EQ('b', testSwap.swapGetCurrentAnimal());
}

// int main(int argc, char **argv) {
//   ::testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }