CXX = g++
CXXFLAGS = -std=c++17 -I../include -I../googletest/googletest/include -pthread
LDFLAGS = -L../googletest/build/lib -lgtest -lgtest_main

SRC_DIR = ../src
TEST_DIR = ../tests

SRC_FILES = $(SRC_DIR)/MyClass.cpp $(SRC_DIR)/MyExceptionClass.cpp
TEST_FILES = $(TEST_DIR)/MyExceptionClassTests.cpp

OBJ_FILES = $(SRC_FILES:.cpp=.o) $(TEST_FILES:.cpp=.o)

TARGET = test.exe

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) $^ $(LDFLAGS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES) $(TARGET)