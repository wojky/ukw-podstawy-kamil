# ukw-podstawy-kamil

## Guess Number Game

A simple number guessing game written in C++. The computer picks a random number between 1 and 100, and you have to guess it!

### How to Compile

```bash
make
```

Or compile manually:

```bash
g++ -Wall -Wextra -std=c++11 -o guess_number guess_number.cpp
```

### How to Run

```bash
./guess_number
```

Or use the Makefile:

```bash
make run
```

### How to Play

1. The game will pick a random number between 1 and 100
2. Enter your guess
3. The game will tell you if your guess is too high or too low
4. Keep guessing until you find the correct number!
5. The game will show you how many attempts it took

### Clean Build Files

```bash
make clean
```