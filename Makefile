
TARGET=/usr/bin

NAME=/apt-profile

BIN=bin/$(NAME)


all:
  mkdir -p bin
  gcc -o $(BIN) profile.c

clean:
  rm $(BIN) *~ -f

install:
  install $(BIN) $(TARGET)

remove:
  rm -f $(TARGET)/$(NAME)

