CC = gcc
CFLAGS = -Wall -g
OUTPUT_DIR = output

SRCS = aula0-ponteiros.c macro0.c
OBJS = $(patsubst %.c,$(OUTPUT_DIR)/%.o,$(SRCS))
TARGET = $(OUTPUT_DIR)/meu_programa

all: $(TARGET)

$(TARGET): $(OBJS) | $(OUTPUT_DIR)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

$(OUTPUT_DIR)/%.o: %.c | $(OUTPUT_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

$(OUTPUT_DIR):
	mkdir -p $(OUTPUT_DIR)

clean:
	rm -f $(OBJS) $(TARGET)
