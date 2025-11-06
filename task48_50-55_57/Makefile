CXX = g++
CXXFLAGS = -std=c++17 -Wall

TARGET = main
SOURCES = main.cpp matrix.cpp matrixFileHandler.cpp
HEADERS = matrix.h matrixFileHandler.h

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)
