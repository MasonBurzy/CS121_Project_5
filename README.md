# CS121iProjecti5


```
#include <iostream, fstream, and sstream>
```


## main() {}

```
Declare converter
Declare num1, num2 as int
```

```
Open up the data file
Use a loop to read the file one line at a time
Use a stringstream and the getline() function to read one data element at a time
note that the delimiter is a char, not a string, so it should be in a single quote
note also that you may need temporary strings, because getline always returns strings
Use a stringstream to do any data conversion you might need
Add up the two integers
Print the text that number of times
Repeat for each line in the text file
```


```
for each line:
	break the data into variables
	The numbers should be ints, the text is a string
	Add the two numbers together
	Print the string that many times
```
