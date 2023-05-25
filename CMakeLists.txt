cmake_minimum_required(VERSION 3.21)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled1 main.cpp MainSystem.cpp MainSystem.h AuthSystem.cpp AuthSystem.h AuthSystemUI.cpp AuthSystemUI.h Accounts.cpp Accounts.h JobInformationSystem.cpp JobInformationSystem.h JobInformationUI.cpp JobInformationUI.h JobInformations.cpp JobInformations.h)
