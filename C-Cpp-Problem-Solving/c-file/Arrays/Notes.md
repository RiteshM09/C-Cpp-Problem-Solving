
//NOTES
/* Arrarys declerations rules.
1) int a[] - 'cannot be expty' while declearing (Error).
2) int a[5] - 'only natural number' in-side block i.e 5 , total number of variables in array
3) int a[5] - index - 0,1,2,3,4  whatever is size of array it consumes memory in continues sequences 

                                            
NOTE : local array when not initalize,        0 1 2 3 4 - index 
then it will contain garbage values i.e a[5]= G G G G G (grabage value)

4) You 'can inatilize array' during "declaration"  int a[5] = { 60,10,25,20,30 }
5) You cannot initialize array 'more than its size' int a[5] = {4,10,12,32,20,50,80} (Error)
imp
6) U can initalize an array during decleration With LESSER VALUES Then the size of Array
int a[5]={4,3} 

index -   0 1 3 4 5
values-   4 3 0 0 0 (remaing has 0 not garbage)

then, Remaining Variable will contain 0 Not garbage value

7) During declaration  You can leave [] empty 
Only true when you inatilize array at the same time 

    a[] ={10,20,40,80,50}      - Compiler sets size = 5

---

*BOUND CHEKCING* - Detecting whether a variable is within defined limits before it is used

*NOTE: C does not support bound checking automatically.*

No error will be generated if u access an index outside the array, C won't give a compile-time error, but your program may show unexpected behavior or crash at runtime.

ex:
int a[5] = {10, 20, 30, 40, 50};

// Valid access:
printf("%d", a[2]);  // ✅ prints 30

// Invalid access:
printf("%d", a[7]);  // ❌ undefined behavior (no error shown, but risky!)


---

Simplified: Arrarys declerations rules.

1. ✅ You must give a size or values while declaring**

   int a[];      // ❌ Error: size not given and no values
   int a[5];     // ✅ OK: size is given


2. Array size must be a natural number**

   int a[5];     // ✅ OK
   int a[-1];    // ❌ Invalid
   

3. 🧮 Array index always starts from 0
   int a[5];  // Indexes: 0, 1, 2, 3, 4 (total 5 elements)


4. U can initialized local arrays 'during decleartion' and it will contain garbage values
   int a[5];     // Contains: G G G G G (garbage values)
 

5. ✅ You can initialize an array at declaration**
   int a[5] = {60, 10, 25, 20, 30};  // Valid


6. ❌ You can't initialize more elements than the size**
   int a[5] = {4, 10, 12, 32, 20, 50};  // ❌ Error: too many values


7. ✅ You can give fewer values — the rest will be 0
   int a[5] = {4, 3};  // Becomes: 4, 3, 0, 0, 0

8. ✅ **You can leave size empty if you initialize right away
   int a[] = {10, 20, 40, 80, 50};  // Compiler sets size = 5

C does not support bound checking automatically.

*/