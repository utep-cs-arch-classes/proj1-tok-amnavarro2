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
- count_words

To begin, in this method im supposed to return a double pointer which will
tokenize the single pointer. which the output if we used "hello world" should
return...

- tokens[0] = "hello"
- tokens[1] = "world"

So in my program there were many ways I went about it until I found the best
way for me. So what I did was that I needed to first allocate new memory for
the double pointer by using the count_words method to get the current size of
the single pointer. Also to be safe I copied the entire single pointer into
another to not lose it in such a big and complex method.

After thats done, now its time to tokenize, so to do this first we traverse
the single pointer and if we find a space char then we would do this. we would
get the integer value of where the first char is at by using word_start_index
(does the same process as word_start but returns the int position of the
index), then we will get the integer value where the space was found by using
find_space. Now we do some simple math to determine the length of our word
which that length would be passed into the copy_str method along with the
single pointer.

When we copy the string then we would containe it in another single pointer,
which we would later use a count to work as the individual index for our
double pointer. When using the double pointer at the current count we will
store the copy ptr we had and then increase our count(index).

Now we need the rest of the strings, so to do thhis if we reach the next index
that is '\0' then we will do more calculations. So to start I need to get the
position of the current so we subtract the index by the length and then find
the position of the last char using word_end_index. We then update the length
by subtracting both values and send the length to the copy_str along with the
index we want to start in our pointer. After we do the same as before and
store the copy in the double pointer.

# free_tokens:

For this piece of code, I needed to free all the tokens allocated in the
double pointer. so what I did was essentially use the free command which will
de-allocate all of our tokens making it unuseable for the future.




