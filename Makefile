CC = clang
CFLAGS = --target=wasm32 -O3 -nostdlib -Wl,--no-entry -Wl,--export-all -Wl,--initial-memory=1048576
TARGET = public/kernel.wasm
SRC = src/kernel.c
all: $(TARGET)
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)
clean:
	rm -f $(TARGET)
