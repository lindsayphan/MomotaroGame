#include <sstream>
#include "../source/choicesBird.cpp"
#include "../headers/choices.hpp"
#include "../headers/inventory.hpp"
#include "../headers/character.hpp"
#include "../headers/bird.hpp"
#include "gtest/gtest.h"

Bird* bird = new Bird();

TEST(ChoicesBirdTest, testGetAnswer1) {
    ChoicesBird *answerTest = new ChoicesBird();
    stringstream in("Y");
    answerTest->setAnswer(in);
    EXPECT_EQ('Y', answerTest->getAnswer());
}

TEST(ChoicesBirdTest, testGetAnswer2) {
    ChoicesBird *answerTest = new ChoicesBird();
    stringstream in("y");
    answerTest->setAnswer(in);
    EXPECT_EQ('y', answerTest->getAnswer());
}

TEST(ChoicesBirdTest, testGetAnswer3) {
    ChoicesBird *answerTest = new ChoicesBird();
    stringstream in("Yes");
    answerTest->setAnswer(in);
    EXPECT_EQ('Y', answerTest->getAnswer());
}

TEST(ChoicesBirdTest, testGetAnswer4) {
    ChoicesBird *answerTest = new ChoicesBird();
    stringstream in("yes");
    answerTest->setAnswer(in);
    EXPECT_EQ('y', answerTest->getAnswer());
}

TEST(ChoicesBirdTest, testGetAnswer5) {
    ChoicesBird *answerTest = new ChoicesBird();
    stringstream in("N");
    answerTest->setAnswer(in);
    EXPECT_EQ('N', answerTest->getAnswer());
}

TEST(ChoicesBirdTest, testGetAnswer6) {
    ChoicesBird *answerTest = new ChoicesBird();
    stringstream in("n");
    answerTest->setAnswer(in);
    EXPECT_EQ('n', answerTest->getAnswer());
}

TEST(ChoicesBirdTest, testGetAnswer7) {
    ChoicesBird *answerTest = new ChoicesBird();
    stringstream in("No");
    answerTest->setAnswer(in);
    EXPECT_EQ('N', answerTest->getAnswer());
}

TEST(ChoicesBirdTest, testGetAnswer8) {
    ChoicesBird *answerTest = new ChoicesBird();
    stringstream in("no");
    answerTest->setAnswer(in);
    EXPECT_EQ('n', answerTest->getAnswer());
}