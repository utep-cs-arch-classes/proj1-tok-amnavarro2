Project 1: Tokenizer
====================
# Instructions:

You should document your tokenizer in this file.

This file is written in the refreshingly simple `markdown` text
formatting language.

To learn about text formatting using markdown, we encourage you to examine 
 - [../README.md](../README.md)
 - the online [Markdown Guide](https://www.markdownguide.org/).

# Main:

In the main method of my gui.c file I will be declaring all the variables such
as int, char *, char**, and some additional arrays which were used for testing
at the time this was made. In the main method I called...

- space_char
- non_space_char
- word_start
- word_end
- count_words
- copy_str
- tokenize
- free_tokens

then from the history.c file I would call on these methods...

- init_history
- add_history
- get_history
- free_history

# space_char and non_space_char methods:

In the space_char method I was assigned to find if there was a space in the character
input and to say that if it is a space(' ') then I return True (1 in this
case), if not I return False(0 in this case).

The non_space_char method is essentially the same method only that if the
current char that you have is not a space then you return True, since thats
what we're looking for, also we return false if the char is a space.

# word_start and word_end methods:

The purpose of the word start method is to find the first char in our string,
so to achieve that I needed to traverse the pointer data type that holds our
collection of chars and get the letter at the first index. In this case if the
first char we find is not a space then we return the value in the pointer
index.

In word_end I had to get the opposite result of word_start, so what I mean is
that I needed to get the last non space char in the pointer. So what I did,
was to traverse the pointer until we find that the NEXT INDEX is equals to
'\0'. The reason why I want to know when the next index is that, is because
'\0' will always be located after the last character. Once I found that I
return the value in the pointer index before that.

# count_words method:

For this method I just wanted to be able to count the amount of words we had
in out pointer. So what I did I would traverse the pointer and when I
encounter a space then a counter would increase. But after I finished counting
I would add 1 to the counter. So if I had "hello world" I would return 2 for 2
words instead.

# copy_str method:

For this method I would need to copy a pointer into a new pointer and decide
how many chars I want to copy based on the integer input. The way I did this
was to allocate memory on a copy pointer based on the amount of chars we want
and having the same data type. Doing so I wanted to traverse the original
pointer by the length that we were give. So if we had an input of 3 with the
word "hello world" then we would copy "hel" and return the copy pointer.

# tokenize method:

For this method I will be using many of the methods from before including some
helper methods which are...

- word_start_index
- word_end_index
- find_space_index
- copy_str

To begin, in this method im supposed to return a double pointer which will
tokenize the single pointer. which the output if we used "hello world" should
return...

tokens[0] = "hello"
tokens[1] = "world"




