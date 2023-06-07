CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_SUBDIRECTORY(tests/googletest)

ADD_EXECUTABLE(test
    tests/characterTest.cpp
    tests/momotaroTest.cpp
    tests/dogTest.cpp
    tests/monkeyTest.cpp
    tests/birdTest.cpp
    tests/enemyTest.cpp
    # tests/choicesDogTest.cpp
    # tests/choicesMonkeyTest.cpp
    # tests/choicesBirdTest.cpp
    # tests/difficultyTest.cpp
    # # tests/inventoryOutputTest.cpp     // being worked on?
    # tests/startOverTest.cpp
    # tests/swapTest.cpp
    tests/battleOutputTest.cpp
    tests/battleTest.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
