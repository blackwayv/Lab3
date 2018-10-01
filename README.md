# Lab3
# Joshua Smith
2. You can detect the overflow when the answers stop making sense (e.g. positive 25000 is suddenly -24000). It broke at 256
3. Overflows at 65536
4. the product is printed as "inf" if it overflows. It overflows at exactly 35, 34 gives an answer
5. Overflows at 171
6. Expected value would be 1 - 1 = 0. Floats don't work correctly past 9, doubles don't work past 8
7. I think the error is that it continues the for loop after iterating to 4.4. No clue why!
8. Double compares the two numbers correctly, and doesn't continue after i reaches 4.4
