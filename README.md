Text Grading Command-line Program
This is a simple command-line application developed in C to evaluate and grade the readability of user-provided text based on U.S. grade levels.

How to Use
Compile the program using the make command.
Run the program. Once it's running, you'll be prompted to input the text you want to grade.
After inputting the text, the program will analyze it and provide a grade level. This grade level is based on U.S. educational grades, ranging from 1st grade, 2nd grade, etc.

For example:
./readability
Enter your text: The quick brown fox jumps over the lazy dog.
Grade 5

How It Works:
The grading is calculated using the Coleman-Liau index, which considers the number of letters, words, and sentences in the text.
It provides an approximate grade level needed to understand the text. For instance, a grade of '5' indicates that a 5th grader (approximately 10-11 years old) would be able to understand the text.

Notes:
The program only accepts English text.
Punctuation marks should be used appropriately to denote the end of sentences, as it affects the grading.
Non-alphabetical characters are not considered in the grading.
This program provides a fun way to estimate the complexity of a text, ideal for teachers, writers, or anyone interested in language and readability. Enjoy experimenting with different texts!
