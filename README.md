0x11. C - printf

A group project by Gidds and Joerl.

A list of various functions that produces its respective outcomes.

printf is a standard library function in C programming that is used to output formatted text to the console or other output devices. It stands for "print formatted". It takes a format string as the first argument and a variable number of arguments to be printed based on the format string.

The format string is a character string that can contain text to be printed and conversion specifiers, which start with the '%' character. Each conversion specifier specifies the type and format of the corresponding argument to be printed. Some commonly used conversion specifiers are:

    %d: for printing decimal integers.
    %f: for printing floating-point numbers.
    %c: for printing characters.
    %s: for printing strings.
    %p: for printing pointers.
    %x or %X: for printing hexadecimal integers.

For example, the following code snippet prints a formatted output to the console:

perl

int num = 42;
char str[] = "Hello, world!";
printf("The answer is %d and the message is \"%s\"\n", num, str);

Output:

csharp

The answer is 42 and the message is "Hello, world!"

printf returns the number of characters printed to the output device. It does not include the null character ('\0') that is automatically appended to the end of the printed string. If an error occurs during printing, printf returns a negative value.

END

| 2023.
