CXX = g++
CXXFLAGS = -std=c++17 -I./include -Wall
LDFLAGS =
SRC = src/main.cpp \
      src/MotorGasolina.cpp \
      src/MotorElectrico.cpp \
      src/DiagnosticSystem.cpp
BJ = $(SRC:.cpp=.o)
TARGET = motores

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
