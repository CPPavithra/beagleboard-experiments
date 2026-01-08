CC= arm-linux-gnueabihf-gcc

QEMU= qemu-arm
SYSROOT= /usr/arm-linux-gnueabihf 

CFLAGS= -Wall -Wextra -O2

TARGET= hello_arm
SRC= main.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

run: $(TARGET)
	$(QEMU) -L $(SYSROOT) ./$(TARGET)

clean:
	rm -f $(TARGET)
