CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_SUBDIRECTORY(tests/googletest)

ADD_EXECUTABLE(test
    tests/enemyTest.cpp
    tests/characterTest.cpp
    tests/difficultyTest.cpp
    # tests/inventoryOutputTest.cpp     // being worked on?
    tests/battleOutputTest.cpp
    tests/startOverTest.cpp
    tests/momotaroTest.cpp
    tests/difficultyTest.cpp
    tests/choicesDogTest.cpp
    tests/choicesMonkeyTest.cpp
    tests/choicesBirdTest.cpp
    tests/birdTest.cpp
    tests/dogTest.cpp
    tests/monkeyTest.cpp
    tests/swapTest.cpp
    tests/battleTest.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
