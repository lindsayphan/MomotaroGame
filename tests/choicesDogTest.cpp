#include <sstream>
#include "../source/choices.cpp"
#include "../source/choicesDog.cpp"
#include "../headers/inventory.hpp"
#include "../headers/character.hpp"
#include "../headers/dog.hpp"
#include "gtest/gtest.h"

Inventory* gameInventory = new Inventory();
Dog* dog = new Dog();

TEST(ChoicesDogTest, testGetAnswer1) {
    ChoicesDog *answerTest = new ChoicesDog();
    stringstream in("Y");
    answerTest->setAnswer(in);
    EXPECT_EQ('Y', answerTest->getAnswer());
}

TEST(ChoicesDogTest, testGetAnswer2) {
    ChoicesDog *answerTest = new ChoicesDog();
    stringstream in("y");
    answerTest->setAnswer(in);
    EXPECT_EQ('y', answerTest->getAnswer());
}

TEST(ChoicesDogTest, testGetAnswer3) {
    ChoicesDog *answerTest = new ChoicesDog();
    stringstream in("Yes");
    answerTest->setAnswer(in);
    EXPECT_EQ('Y', answerTest->getAnswer());
}

TEST(ChoicesDogTest, testGetAnswer4) {
    ChoicesDog *answerTest = new ChoicesDog();
    stringstream in("yes");
    answerTest->setAnswer(in);
    EXPECT_EQ('y', answerTest->getAnswer());
}

TEST(ChoicesDogTest, testGetAnswer5) {
    ChoicesDog *answerTest = new ChoicesDog();
    stringstream in("N");
    answerTest->setAnswer(in);
    EXPECT_EQ('N', answerTest->getAnswer());
}

TEST(ChoicesDogTest, testGetAnswer6) {
    ChoicesDog *answerTest = new ChoicesDog();
    stringstream in("n");
    answerTest->setAnswer(in);
    EXPECT_EQ('n', answerTest->getAnswer());
}

TEST(ChoicesDogTest, testGetAnswer7) {
    ChoicesDog *answerTest = new ChoicesDog();
    stringstream in("No");
    answerTest->setAnswer(in);
    EXPECT_EQ('N', answerTest->getAnswer());
}

TEST(ChoicesDogTest, testGetAnswer8) {
    ChoicesDog *answerTest = new ChoicesDog();
    stringstream in("no");
    answerTest->setAnswer(in);
    EXPECT_EQ('n', answerTest->getAnswer());
}