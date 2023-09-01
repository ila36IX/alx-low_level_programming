# Bit Manipulation
![](https://preview.redd.it/remembered-recently-how-scared-i-was-of-bitwise-operators-v0-jd0pcpcitbla1.png?width=640&crop=smart&auto=webp&s=a3a720a65ccc8c71de1844a6f196211632d0ee5e)
## Introduction
Bit manipulation is a fundamental concept in computer programming that involves the manipulation of individual bits within a binary representation of data.
## Bitwise Operators
Bitwise operators are essential tools for bit manipulation. They allow you to perform operations at the bit level, such as setting, clearing, toggling, and checking the status of specific bits.
Common Bitwise Operators:
Symbol | Operation
---|---
`&` | Bitwise AND
`|` | Bitwise Inclusive-OR
`^` | Bitwise Exclusive-OR
`~` | Ones complement
`<<` | Left shift
`>>` | Right shift

## Table of truth

`A` | `B` | `A | b` |`A & b` | `A ^ b` | `~A` 
--- | --- | ---     | ---    | ---     | --- 
0   | 0   | 0       | 0      | 0       | 1 
0 | 1 | 1 | 0 | 1 | 1 
1 | 0 | 1 | 0 | 1 | 0 
1 | 1 | 1 | 1 | 0 | 0 
