## Awk Commands 
* Awk is a scripting language used for manipulating data and generating reports.The awk command programming language requires no compiling, and allows the user to use variables, numeric functions, string functions, and logical operators.
#### Awk is mostly used for pattern scanning and processing
### Syntax :
```
awk options 'selection _criteria {action }' input-file > output-file
```
```
-f program-file : Reads the AWK program source from the file 
                  program-file, instead of from the 
                  first command line argument.
-F fs            : Use fs for the input field separator
```
------------------------------------------------------------------------------------------------
### Example:
Consider the following text file as the input file for all cases below.
```
$cat > employee.txt 
ajay manager account 45000
sunil clerk account 25000
varun manager sales 50000
amit manager account 47000
tarun peon sales 15000
deepak clerk sales 23000
sunil peon sales 13000
satvik director purchase 80000 
```
----------------------------------------------------------------------------------------------
### 1) Default behavior of Awk : 
By default Awk prints every line of data from the specified file.
```
$ awk '{print}' employee.txt
```
- In the above example, no pattern is given. So the actions are applicable to all the lines. Action print without any argument prints the whole line by default, so it prints all the lines of the file without failure.
--------------------------------------------------------------------------------------------------
### 2) Print the lines which matches with the given pattern.
```
$ awk '/manager/ {print}' employee.txt 

```
```
Output :
ajay manager account 45000
varun manager sales 50000
amit manager account 47000 
```
- In the above example, the awk command prints all the line which matches with the ‘manager’.
-----------------------------------------------------------------------------------------------
### 3)  Splitting a Line Into Fields :
For each record i.e line, the awk command splits the record delimited by whitespace character by default and stores it in the $n variables. If the line has 4 words, it will be stored in $1, $2, $3 and $4 respectively. Also, $0 represents the whole line.
```
$ awk '{print $1,$4}' employee.txt 
```
```
Output :
ajay 45000
sunil 25000
varun 50000
amit 47000
tarun 15000
deepak 23000
sunil 13000
satvik 80000 
```
- In the above example, $1 and $4 represents Name and Salary fields respectively.
---------------------------------------------------------------------------------------------
### 4) Built In Variables In Awk
Awk’s built-in variables include the field variables—$1, $2, $3, and so on ($0 is the entire line) — that break a line of text into individual words or pieces called fields.

- NR: NR command keeps a current count of the number of input records. Remember that records are usually lines. Awk command performs the pattern/action statements once for each record in a file.

- NF: NF command keeps a count of the number of fields within the current input record.

- FS: FS command contains the field separator character which is used to divide fields on the input line. The default is “white space”, meaning space and tab characters. FS can be reassigned to another character (typically in BEGIN) to change the field separator.

- RS: RS command stores the current record separator character. Since, by default, an input line is the input record, the default record separator character is a newline.

- OFS: OFS command stores the output field separator, which separates the fields when Awk prints them. The default is a blank space. Whenever print has several parameters separated with commas, it will print the value of OFS in between each parameter.

- ORS: ORS command stores the output record separator, which separates the output lines when Awk prints them. The default is a newline character. print automatically outputs the contents of ORS at the end of whatever it is given to print.

