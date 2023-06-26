CC = gcc
CFLAGS = -c -std=c99 -Wall -pedantic
# w/Analyser
#CFLAGS = -std=c99 -Wall -pedantic -Wanalyzer-allocation-size -Wanalyzer-deref-before-check -Wanalyzer-double-fclose -Wanalyzer-double-free -Wanalyzer-exposure-through-output-file -Wanalyzer-exposure-through-uninit-copy -Wanalyzer-fd-access-mode-mismatch -Wanalyzer-fd-double-close -Wanalyzer-fd-leak -Wanalyzer-fd-phase-mismatch -Wanalyzer-fd-type-mismatch -Wanalyzer-fd-use-after-close -Wanalyzer-fd-use-without-check -Wanalyzer-file-leak -Wanalyzer-free-of-non-heap -Wanalyzer-imprecise-fp-arithmetic -Wanalyzer-infinite-recursion -Wanalyzer-jump-through-null -Wanalyzer-malloc-leak -Wanalyzer-mismatching-deallocation -Wanalyzer-null-argument -Wanalyzer-null-dereference -Wanalyzer-out-of-bounds -Wanalyzer-possible-null-argument -Wanalyzer-possible-null-dereference -Wanalyzer-putenv-of-auto-var -Wanalyzer-shift-count-negative -Wanalyzer-shift-count-overflow -Wanalyzer-stale-setjmp-buffer -Wanalyzer-unsafe-call-within-signal-handler -Wanalyzer-use-after-free -Wanalyzer-use-of-pointer-in-stale-stack-frame -Wanalyzer-use-of-uninitialized-value -Wanalyzer-va-arg-type-mismatch -Wanalyzer-va-list-exhausted -Wanalyzer-va-list-leak -Wanalyzer-va-list-use-after-va-end -Wanalyzer-write-to-const -Wanalyzer-write-to-string-literal
#CFLAGS = -std=c99 

default: L7T1_io L7T1o L7T1

all: L7T1 L7T2 L7T3 L7T4 L7T5 

L7T1: L7T1.o L7T1.o
	$(CC) L7T1.o L7T1_io.o -o L7T1 

L7T1o: L7T1.c L7T1_io.h
	$(CC) L7T1.c $(CFLAGS)

L7T1_io: L7T1_io.c L7T1_io.h
	$(CC) L7T1_io.c $(CFLAGS)

L7T2: L7T2.c
	$(CC) -o L7T2 L7T2.c $(CFLAGS)

L7T3: L7T3.c
	$(CC) -o L7T3 L7T3.c $(CFLAGS)



clean:
	rm -rfv L7T1 L7T1.o L7T1_io.o L7T2 L7T3 L7T4
