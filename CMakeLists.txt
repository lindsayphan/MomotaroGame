CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_SUBDIRECTORY(tests/googletest)

# FOR VALGRIND:
#g++ -g -O0 main.cpp source/character.cpp source/enemy.cpp source/momotaro.cpp source/dog.cpp source/monkey.cpp source/bird.cpp source/statsOutput.cpp source/battle.cpp source/battleOutput.cpp source/difficulty.cpp source/narrative.cpp source/afterBattles.cpp source/character.cpp source/momotaro.cpp source/dog.cpp source/monkey.cpp source/bird.cpp source/choices.cpp source/choicesDog.cpp source/choicesMonkey.cpp source/choicesBird.cpp source/storyDog.cpp source/storyMonkey.cpp source/storyBird.cpp source/finalNarrations.cpp source/item.cpp source/inventory.cpp source/inventoryMenu.cpp source/inventoryOutput.cpp source/swap.cpp -o gameOn
# valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./gameOn

ADD_EXECUTABLE(test
    tests/battleTest.cpp
    tests/battleOutputTest.cpp
    tests/birdTest.cpp
    tests/characterTest.cpp
    tests/choicesBirdTest.cpp
    tests/choicesDogTest.cpp
    tests/choicesMonkeyTest.cpp
    tests/dogTest.cpp
    tests/difficultyTest.cpp
    tests/enemyTest.cpp
    tests/inventoryTest.cpp
    tests/itemTest.cpp
    tests/momotaroTest.cpp
    tests/monkeyTest.cpp
    tests/startOverTest.cpp
    tests/statsOutputTest.cpp
    tests/swapTest.cpp  
)

ADD_EXECUTABLE(gameOn
    main.cpp
    source/character.cpp
    source/enemy.cpp
    source/momotaro.cpp
    source/dog.cpp
    source/monkey.cpp
    source/bird.cpp
    source/statsOutput.cpp
    source/battle.cpp
    source/battleOutput.cpp
    source/difficulty.cpp
    source/narrative.cpp
    source/afterBattles.cpp
    source/character.cpp
    source/momotaro.cpp
    source/dog.cpp
    source/monkey.cpp
    source/bird.cpp
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
    source/swap.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)