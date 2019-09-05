# Lab 1 Part 3 Exercises

*Exercises 1, 2, and 3 should be completed by 9/6 at 3pm*
 
This repository contains a collection of C files for the exercises
you are to complete for the third part of the first laboratory meeting.
Try to complete as many exercises as you can in the lab period, and
complete the first three before the next lecture. The fourth is an
extra exercise that you can work to complete, too.

On the original Lab 1 pages, which you are probably in the midst of
working through, you will also be learning how to obtain this repository
and then also how to submit your completed work via GitHub.

Here, I'll just give the C exercises' instructions, not the Git instructions.
This will likely be how we distribute programming assignments throughout
the semester. The README will give the assignment.

You should see four C programs in this repository: `hello.cc`, `countDown.cc`,
`fToC.cc`, and `guess.cc`. There is also the README file.

If you examine the file `hello.cc`, you'll see it contains a short, simple C
program. Recall that you can compile that program with the command

    g++ -o hello hello.cc

and then, if there are no errors, you can run it with the command

    ./hello

You can also inspect the code of the program with the command

    cat hello.cc

and edit it with the command

    nano hello.cc

In each of the exercises below, you are asked to modify these programs
in some small way. Make those changes, see if the code compiles and runs.
If it runs correctly, survives your testing, you can submit all your 
changes using the `git push` command (after several `add` command
and a last `commit` command) as described on the main Lab 1 page.

---
**Exercise 1:** Hello, world!  
Change the C program `hello.cc` so that it outputs a second line of text. That text
can be anything you like. Because this is an 80s-influenced computer science
course, I was inspired to make my version be like Phil Collins. I made mine
say

    Hello, world!
    I must be going...

You can do the same, or whatever. Compile and run to see if your change works.

---
**Exercise 2:** It's the final count down.  
The C program `countDown.cc` asks the user for an integer, and then counts up
to that value. But the code was *supposed* to have it count the other way.
Change the code that it instead counts down from the entered number, down to
1.  It should do something like the following:

    Enter the starting count: 5
    5
    4
    3
    2
    1
    Woo!

---

**Exercise 3:** Some like it fahrenheit.

The C program `fToC.cc` asks the user for an integer representing a temperature
in degrees fahrenheit, and then reports the integer equivalent in degrees celsius,
using integer division to truncating any fractional remainder.

Make a copy of this program with the console command:

    cp fToC.cc cToF.cc

and modify that new program file `cToF.cc` so that it gets a temperature in degrees
celsius, and reports its integer equivalent in degrees fahrenheit.

---

**Exercise 4:** I guess so.

This is a BONUS exercise but feel free to work on it during lab, or after.

The C program `guess.cc` picks a random number from 1 to 100, and then helps the
user try to guess that number. Modify the program so that the user gets a limited
number of guesses. Make it so that they get at most 6 guesses. If they get it
correct in 6 or fewer attempts, then your program should tell them they're
awesome. If they get it wrong with six guesses, the program should stop looping,
and reveal the number to them.









