cmake_minimum_required(VERSION 3.6)
project(INFO450BankStatement)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp lib/variables.h lib/vectorSum.h src/vectorSum.cpp lib/beginningBalance.h src/beginningBalance.cpp lib/transactions.h src/transactions.cpp lib/endTransactionOutput.h src/endTransactionOutput.cpp lib/showEachTransaction.h src/showEachTransaction.cpp)

add_executable(INFO450BankStatement ${SOURCE_FILES})