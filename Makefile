CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = bin/problems
SRC = problems.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
