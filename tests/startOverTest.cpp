#include "../source/startOver.cpp"
#include "gtest/gtest.h"

TEST(startOverTest, testRestartAnswerInputNoThrow) {
    startOver testStartover;
    EXPECT_NO_THROW(testStartover.restartAnswerInput());
}

TEST(startOverTest, testRestartGetAnswery) {
    startOver testStartover;
    testStartover.restartSetAnswer('y');
    EXPECT_EQ('y', testStartover.restartGetAnswer());
}

TEST(startOverTest, testRestartGetAnswern) {
    startOver testStartover;
    testStartover.restartSetAnswer('n');
    EXPECT_EQ('n', testStartover.restartGetAnswer());
}

TEST(startOverTest, testRestartSetAnswerNoThrow) {
    startOver testStartover;
    EXPECT_NO_THROW(testStartover.restartSetAnswer('y'));
}

TEST(startOverTest, testRestartTrueNoThrow) {
    startOver testStartover;
    EXPECT_NO_THROW(testStartover.restartTrue());
}

TEST(startOverTest, testRestartFalseNoThrow) {
    startOver testStartover;
    EXPECT_NO_THROW(testStartover.restartFalse());
}

TEST(startOverTest, testRestartPromptNoThrow) {
    startOver testStartover;
    bool testBattleLost = false;
    EXPECT_NO_THROW(testStartover.restartPrompt(testBattleLost));
}

TEST(startOverTest, testRestartPromptN) {
    startOver testStartover;
    bool testBattleLost = true;
    char testAnswer = 'N';
    testStartover.restartSetAnswer('N');
    EXPECT_FALSE(testStartover.restartPrompt(testBattleLost));
}

TEST(startOverTest, testRestartPromptY) {
    startOver testStartover;
    bool testBattleLost = true;
    char testAnswer = 'y';
    testStartover.restartSetAnswer('y');
    EXPECT_TRUE(testStartover.restartPrompt(testBattleLost));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}