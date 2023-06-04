CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_SUBDIRECTORY(tests/googletest)

ADD_EXECUTABLE(test
    # tests/characterTest.cpp
    # tests/difficultyTest.cpp
    tests/itemTest.cpp
    tests/inventoryTest.cpp
    tests/inventoryOutputTest.cpp
    tests/battleOutputTest.cpp
    tests/startOverTest.cpp
    tests/characterTest.cpp
    tests/momotaroTest.cpp
    tests/difficultyTest.cpp
    tests/choicesDogTest.cpp
    tests/choicesMonkeyTest.cpp
    tests/choicesBirdTest.cpp
    tests/birdTest.cpp
    tests/dogTest.cpp
    tests/monkeyTest.cpp
)

ADD_EXECUTABLE(inventory
    main.cpp
    source/item.cpp
    source/inventory.cpp
    source/inventoryOutput.cpp
    source/inventoryMenu.cpp
)


TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
