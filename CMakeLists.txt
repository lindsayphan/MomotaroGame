CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_SUBDIRECTORY(tests/googletest)

ADD_EXECUTABLE(test
    tests/battleOutputTest.cpp
    tests/birdTest.cpp
    tests/characterTest.cpp
    tests/choicesBirdTest.cpp
    tests/enemyTest.cpp
    tests/difficultyTest.cpp
    tests/inventoryOutputTest.cpp
    tests/startOverTest.cpp
    tests/momotaroTest.cpp
    tests/choicesDogTest.cpp
    tests/choicesMonkeyTest.cpp
    tests/dogTest.cpp
    tests/inventoryTest.cpp
    tests/itemTest.cpp
    tests/monkeyTest.cpp
    tests/swapTest.cpp
    tests/statsOutputTest.cpp
)

ADD_EXECUTABLE(narrative
    main.cpp
    source/difficulty.cpp
    source/narrative.cpp
    source/choices.cpp
    source/choicesDog.cpp
    source/choicesMonkey.cpp
    source/choicesBird.cpp
    source/storyDog.cpp
    source/storyMonkey.cpp
    source/storyBird.cpp
    source/finalNarrations.cpp
    source/item.cpp
    source/inventory.cpp
    source/inventoryMenu.cpp
    source/inventoryOutput.cpp
)


TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
