#include <stdio.h>


void reverse_words(char str[])
{
    int i, j, start, end;
    char temp[100];
    j = 0;

    for(i = 0; str[i]; i++);
    end = i - 1;

    for(i = end; i >= 0; i--)
    {
        if(str[i] == ' ' || i == 0)
        {
            start = (i == 0) ? 0 : i + 1;
            while(str[start] && start <= end)
                temp[j++] = str[start++];
            temp[j++] = ' ';
            end = i - 1;
        }
    }
    temp[j - 1] = '\0';
    printf("%s\n", temp);
}

void remove_duplicates(char str[])
{
    int i, j, k;
    for(i = 0; str[i]; i++)
    {
        for(j = i + 1; str[j]; )
        {
            if(str[i] == str[j])
            {
                for(k = j; str[k]; k++)
                    str[k] = str[k + 1];
            }
            else
                j++;
        }
    }
    printf("%s\n", str);
}

void highest_freq(char str[])
{
    int i, j, count, max = 0;
    char ch;

    for(i = 0; str[i]; i++)
    {
        count = 1;
        for(j = i + 1; str[j]; j++)
            if(str[i] == str[j])
                count++;

        if(count > max)
        {
            max = count;
            ch = str[i];
        }
    }
    printf("%c appears %d times\n", ch, max);
}

void lowest_freq(char str[])
{
    int i, j, count, min = 100;

    for(i = 0; str[i]; i++)
    {
        count = 1;
        for(j = i + 1; str[j]; j++)
            if(str[i] == str[j])
                count++;
        if(count < min)
            min = count;
    }

    for(i = 0; str[i]; i++)
    {
        count = 1;
        for(j = i + 1; str[j]; j++)
            if(str[i] == str[j])
                count++;
        if(count == min)
            printf("%c ", str[i]);
    }
    printf("\n");
}

void reverse_string(char str[])
{
    int i, j;
    char temp;
    for(i = 0; str[i]; i++);
    j = i - 1;

    for(i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("%s\n", str);
}

void remove_spaces(char str[])
{
    int i = 0, j = 0;
    char temp[100];

    while(str[i] == ' ') i++;

    for(; str[i]; i++)
    {
        if(!(str[i] == ' ' && str[i + 1] == ' '))
            temp[j++] = str[i];
    }

    if(temp[j - 1] == ' ')
        j--;
    temp[j] = '\0';

    printf("%s\n", temp);
}


void replace_char(char str[], char old, char newc)
{
    int i;
    for(i = 0; str[i]; i++)
        if(str[i] == old)
            str[i] = newc;
    printf("%s\n", str);
}

void char_frequency(char str[])
{
    int i, j, count;
    for(i = 0; str[i]; i++)
    {
        count = 1;
        for(j = i + 1; str[j]; j++)
            if(str[i] == str[j])
                count++;
        printf("%c = %d\n", str[i], count);
    }
}


void first_word(char str[], char word[])
{
    int i, j;
    for(i = 0; str[i]; i++)
    {
        for(j = 0; word[j]; j++)
            if(str[i + j] != word[j])
                break;
        if(!word[j])
        {
            printf("Found at position %d\n", i);
            return;
        }
    }
}

void remove_word(char str[], char word[])
{
    int i, j, k;
    for(i = 0; str[i]; i++)
    {
        for(j = 0; word[j]; j++)
            if(str[i + j] != word[j])
                break;

        if(!word[j])
        {
            for(k = i; str[k + j]; k++)
                str[k] = str[k + j];
        }
    }
    printf("%s\n", str);
}

void count_words(char str[])
{
    int i, count = 1;
    for(i = 0; str[i]; i++)
        if(str[i] == ' ')
            count++;
    printf("%d\n", count);
}


void toggle_case(char str[])
{
    int i;
    for(i = 0; str[i]; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    printf("%s\n", str);
}

void remove_last(char str[], char ch)
{
    int i, pos = -1;
    for(i = 0; str[i]; i++)
        if(str[i] == ch)
            pos = i;

    for(i = pos; str[i]; i++)
        str[i] = str[i + 1];

    printf("%s\n", str);
}

void replace_first(char str[], char old, char newc)
{
    int i;
    for(i = 0; str[i]; i++)
        if(str[i] == old)
        {
            str[i] = newc;
            break;
        }
    printf("%s\n", str);
}

void count_word(char str[], char word[])
{
    int i, j, count = 0;
    for(i = 0; str[i]; i++)
    {
        for(j = 0; word[j]; j++)
            if(str[i + j] != word[j])
                break;
        if(!word[j])
            count++;
    }
    printf("%d\n", count);
}


void palindrome(char str[])
{
    int i, j;
    for(i = 0; str[i]; i++);
    j = i - 1;

    for(i = 0; i < j; i++, j--)
        if(str[i] != str[j])
        {
            printf("Not Palindrome\n");
            return;
        }
    printf("Palindrome\n");
}

void last_occurrence(char str[], char ch)
{
    int i, pos = -1;
    for(i = 0; str[i]; i++)
        if(str[i] == ch)
            pos = i;
    printf("Position: %d\n", pos);
}

void trim(char str[])
{
    remove_spaces(str);
}

void first_char(char str[], char ch)
{
    int i;
    for(i = 0; str[i]; i++)
        if(str[i] == ch)
        {
            printf("Position: %d\n", i);
            return;
        }
}


void all_word(char str[], char word[])
{
    int i, j;
    printf("Found at positions: ");
    for(i = 0; str[i]; i++)
    {
        for(j = 0; word[j]; j++)
            if(str[i + j] != word[j])
                break;
        if(!word[j])
            printf("%d ", i);
    }
    printf("\n");
}


int main()
{
    char s1[] = "hello world from C";
    reverse_words(s1);

    char s2[] = "programming";
    remove_duplicates(s2);

    char s3[] = "engineering";
    highest_freq(s3);
    lowest_freq(s3);

    char s4[] = "OpenAI";
    reverse_string(s4);

    char s5[] = " This is ChatGPT ";
    remove_spaces(s5);

    char s6[] = "banana";
    replace_char(s6, 'a', 'o');

    char s7[] = "success";
    char_frequency(s7);

    char s8[] = "this is a test string";
    char w1[] = "test";
    first_word(s8, w1);

    char s9[] = "hello world hello universe";
    char w2[] = "hello";
    remove_word(s9, w2);

    char s10[] = "C programming is fun";
    count_words(s10);

    char s11[] = "HeLLo";
    toggle_case(s11);

    char s12[] = "mississippi";
    remove_last(s12, 's');

    char s13[] = "google";
    replace_first(s13, 'o', 'a');

    char s14[] = "hi hello hi hey hi";
    char w3[] = "hi";
    count_word(s14, w3);

    char s15[] = "madam";
    palindrome(s15);

    char s16[] = "ababcabc";
    last_occurrence(s16, 'b');

    char s17[] = " Hello World ";
    trim(s17);

    char s18[] = "elephant";
    first_char(s18, 'e');

    char s19[] = "the sky is the limit in the sky";
    char w4[] = "the";
    all_word(s19, w4);

    return 0;
}
