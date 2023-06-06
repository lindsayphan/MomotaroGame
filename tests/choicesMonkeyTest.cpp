#include <sstream>
#include "../source/choicesMonkey.cpp"
#include "../headers/choices.hpp"
#include "../headers/inventory.hpp"
#include "gtest/gtest.h"

TEST(ChoicesMonkeyTest, testGetAnswer1) {
    ChoicesMonkey *answerTest = new ChoicesMonkey();
    stringstream in("Y");
    answerTest->setAnswer(in);
    EXPECT_EQ('Y', answerTest->getAnswer());
}

TEST(ChoicesMonkeyTest, testGetAnswer2) {
    ChoicesMonkey *answerTest = new ChoicesMonkey();
    stringstream in("y");
    answerTest->setAnswer(in);
    EXPECT_EQ('y', answerTest->getAnswer());
}

TEST(ChoicesMonkeyTest, testGetAnswer3) {
    ChoicesMonkey *answerTest = new ChoicesMonkey();
    stringstream in("Yes");
    answerTest->setAnswer(in);
    EXPECT_EQ('Y', answerTest->getAnswer());
}

TEST(ChoicesMonkeyTest, testGetAnswer4) {
    ChoicesMonkey *answerTest = new ChoicesMonkey();
    stringstream in("yes");
    answerTest->setAnswer(in);
    EXPECT_EQ('y', answerTest->getAnswer());
}

TEST(ChoicesMonkeyTest, testGetAnswer5) {
    ChoicesMonkey *answerTest = new ChoicesMonkey();
    stringstream in("N");
    answerTest->setAnswer(in);
    EXPECT_EQ('N', answerTest->getAnswer());
}

TEST(ChoicesMonkeyTest, testGetAnswer6) {
    ChoicesMonkey *answerTest = new ChoicesMonkey();
    stringstream in("n");
    answerTest->setAnswer(in);
    EXPECT_EQ('n', answerTest->getAnswer());
}

TEST(ChoicesMonkeyTest, testGetAnswer7) {
    ChoicesMonkey *answerTest = new ChoicesMonkey();
    stringstream in("No");
    answerTest->setAnswer(in);
    EXPECT_EQ('N', answerTest->getAnswer());
}

TEST(ChoicesMonkeyTest, testGetAnswer8) {
    ChoicesMonkey *answerTest = new ChoicesMonkey();
    stringstream in("no");
    answerTest->setAnswer(in);
    EXPECT_EQ('n', answerTest->getAnswer());
}