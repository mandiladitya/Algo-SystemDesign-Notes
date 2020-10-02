# Integers
**Set n<sup>th</sup> bit**
```
x | (1<<n)
```
**Unset n<sup>th</sup> bit**
 ```
 x & ~(1<<n)
 ```
**Toggle n<sup>th</sup> bit**
```
x ^ (1<<n)
```
**Round up to the next power of two**
```
unsigned int v; //only works if v is 32 bit
v--;
v |= v >> 1;
v |= v >> 2;
v |= v >> 4;
v |= v >> 8;
v |= v >> 16;
v++;
```
**Round down / floor a number**
```
n >> 0

5.7812 >> 0 // 5

```
**Get the maximum integer**
```
int maxInt = ~(1 << 31);
int maxInt = (1 << 31) - 1;
int maxInt = (1 << -1) - 1;
int maxInt = -1u >> 1;
```
**Get the minimum integer**
```
int minInt = 1 << 31;
int minInt = 1 << -1;
```
**Get the maximum long**
```
long maxLong = ((long)1 << 127) - 1;
```
**Multiply by 2**
```
n << 1; // n*2
```
**Divide by 2**
```
n >> 1; // n/2
```
**Multiply by the m<sup>th</sup> power of 2**
```
n << m;
```
**Divide by the m<sup>th</sup> power of 2**
```
n >> m;
```
**Check Equality**

<sub>*This is 35% faster in Javascript*</sub>
```
(a^b) == 0; // a == b
!(a^b) // use in an if
```
**Check if a number is odd**
```
(n & 1) == 1;
```
**Exchange (swap) two values**
```
//version 1
a ^= b;
b ^= a;
a ^= b;

//version 2
a = a ^ b ^ (b = a)
```
**Get the absolute value**
```
//version 1
x < 0 ? -x : x;

//version 2
(x ^ (x >> 31)) - (x >> 31);
```
**Get the max of two values**
```
b & ((a-b) >> 31) | a & (~(a-b) >> 31);
```
**Get the min of two values**
```
a & ((a-b) >> 31) | b & (~(a-b) >> 31);
```
**Check whether both numbers have the same sign**
```
(x ^ y) >= 0;
```
**Flip the sign**
```
i = ~i + 1; // or
i = (i ^ -1) + 1; // i = -i
```
**Calculate 2<sup>n</sup>**
```
1 << n;
```
**Whether a number is power of 2**
```
n > 0 && (n & (n - 1)) == 0;
```
**Modulo 2<sup>n</sup> against m**
```
m & ((1 << n) - 1);
```
**Get the average**
```
(x + y) >> 1;
((x ^ y) >> 1) + (x & y);
```
**Get the m<sup>th</sup> bit of n (from low to high)**
```
(n >> (m-1)) & 1;
```
**Set the m<sup>th</sup> bit of n to 0 (from low to high)**
```
n & ~(1 << (m-1));
```
**Check if n<sup>th</sup> bit is set**
```
if (x & (1<<n)) {
  n-th bit is set
} else {
  n-th bit is not set
}
```
**Isolate (extract) the right-most 1 bit**
```
x & (-x)
```
**Isolate (extract) the right-most 0 bit**
```
~x & (x+1)
```

**Set the right-most 0 bit to 1**
```
x | (x+1)
```

**Set the right-most 1 bit to 0**
```
x & (x-1)
```

**n + 1**
```
-~n
```
**n - 1**
```
~-n
```
**Get the negative value of a number**
```
~n + 1;
(n ^ -1) + 1;
```
**`if (x == a) x = b; if (x == b) x = a;`**
```
x = a ^ b ^ x;
```
**Swap Adjacent bits**
```
((n & 10101010) >> 1) | ((n & 01010101) << 1)
```
**Different rightmost bit of numbers m & n**
```
(n^m)&-(n^m) // returns 2^x where x is the position of the different bit (0 based)
```
**Common rightmost bit of numbers m & n**
```
~(n^m)&(n^m)+1 // returns 2^x where x is the position of the common bit (0 based)
```

--------------------------------------------------------------------------------

## Strings

**Convert letter to lowercase:**
```
OR by space => (x | ' ')
Result is always lowercase even if letter is already lowercase
eg. ('a' | ' ') => 'a' ; ('A' | ' ') => 'a'
```

**Convert letter to uppercase:**
```
AND by underline => (x & '_')
Result is always uppercase even if letter is already uppercase
eg. ('a' & '_') => 'A' ; ('A' & '_') => 'A'
```
**Invert letter's case:**
```
XOR by space => (x ^ ' ')
eg. ('a' ^ ' ') => 'A' ; ('A' ^ ' ') => 'a'
```
**Letter's position in alphabet:**
```
AND by chr(31)/binary('11111')/(hex('1F') => (x & "\x1F")
Result is in 1..26 range, letter case is not important
eg. ('a' & "\x1F") => 1 ; ('B' & "\x1F") => 2
```
**Get letter's position in alphabet (for Uppercase letters only):**
```
AND by ? => (x & '?') or XOR by @ => (x ^ '@')
eg. ('C' & '?') => 3 ; ('Z' ^ '@') => 26
```
**Get letter's position in alphabet (for lowercase letters only):**
```
XOR by backtick/chr(96)/binary('1100000')/hex('60') => (x ^ '`')
eg. ('d' ^ '`') => 4 ; ('x' ^ '`') => 24
```
