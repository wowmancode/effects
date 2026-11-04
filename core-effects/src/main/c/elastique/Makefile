CC ?= cc
BUILD ?= build
CFLAGS ?= -O1
CPPFLAGS ?=
LDFLAGS ?=
FPFLAGS = -ffp-contract=off -fno-fast-math
GENSRC = $(wildcard generated/blocks_p*.c) generated/blocks_index.c
GENOBJ = $(patsubst generated/%.c,$(BUILD)/%.o,$(GENSRC))
OBJ = $(BUILD)/main.o $(BUILD)/portable_engine.o $(BUILD)/a17.o $(GENOBJ) $(BUILD)/image.o
TARGET ?= elastique

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(LDFLAGS) $^ -lm -Wl,-z,noexecstack -o $@

$(BUILD):
	mkdir -p $@

$(BUILD)/main.o: main.c engine.h | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(FPFLAGS) -std=c11 -Wall -Wextra -c $< -o $@

$(BUILD)/a17.o: a17.c a17.h | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(FPFLAGS) -std=c11 -Wall -Wextra -c $< -o $@

$(BUILD)/portable_engine.o: portable_engine.c engine.h a17.h generated/lift_host.c generated/lift_runtime.h generated/lift_adapters.c generated/lift_imports.h | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(FPFLAGS) -std=c11 -w -c $< -o $@

$(BUILD)/blocks_%.o: generated/blocks_%.c generated/lift_runtime.h | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(FPFLAGS) -std=c11 -w -c $< -o $@

$(BUILD)/image.o: generated/image.S generated/data_image.bin | $(BUILD)
	$(CC) $(CPPFLAGS) -c $< -o $@

$(BUILD)/test-a17: a17.c a17.h tests/test_a17_golden.c | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(FPFLAGS) -std=c11 -Wall -Wextra a17.c tests/test_a17_golden.c -lm $(LDFLAGS) -o $@

test-a17: $(BUILD)/test-a17
	./$(BUILD)/test-a17 tests/a17-golden.bin

test: $(TARGET) test-a17
	python3 tests/test_cli.py ./$(TARGET)

clean:
	rm -rf $(BUILD) $(TARGET)

.PHONY: all test test-a17 clean
