#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string str);
int count_words(string str);
int count_sentences(string str);
int calculate_grade(int letters, int words, int sentences);

int main(void)

{

    // get text from user
    string text = get_string("Text: ");

    // get letter, word and sentence count
    int letter_count = count_letters(text);
    int word_count = count_words(text);
    int sentence_count = count_sentences(text);
    // get grade
    int grade = calculate_grade(letter_count, word_count, sentence_count);

    // print grade back to user dpending on score
    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }

}


int count_letters(string str)
// returns the letter count
{
    int sum = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (isalpha(str[i]))
        {
            sum++;
        }
    }
    return sum;
}

int count_words(string str)
// returns the word count
{
    int sum = 1;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (isspace(str[i]))
        {
            sum++;
        }
    }
    return sum;
}

int count_sentences(string str)
// returns the sentence count
{
    int sum = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == '.' || str[i] == '?' || str[i] == '!')
        {
            sum++;
        }
    }
    return sum;
}

int calculate_grade(int letters, int words, int sentences)
// calculates the reading grade using Coleman-Liau index formula
{

    float av_let_per_100_word = (letters / (float) words) * 100;
    float av_sent_per_100_word = (sentences / (float) words) * 100;

    float index = 0.0588 * (av_let_per_100_word) - 0.296 * (av_sent_per_100_word) - 15.8;
    return round(index);
}
