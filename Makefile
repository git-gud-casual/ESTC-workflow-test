SRCDIR = src
BUILDDIR ?= build

SRCS = $(SRCDIR)/main.c $(wildcard $(SRCDIR)/vector3/*.c)
OBJS = $(SRCS:.c=.o)
OBJS := $(subst $(SRCDIR), $(BUILDDIR), $(OBJS))

main: $(OBJS)
	gcc -o $@ $^

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	gcc -c $^ -o $@

.depend: $(SRCS)
	gcc -MM $^ -o $@

clean: 
	rm -rf $(BUILDDIR)

include .depend
.PHONY: clean