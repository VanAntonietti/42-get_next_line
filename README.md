<p align="center">
  <a href="https://www.linkedin.com/in/vanantonietti/">
    <img alt="Van Antonietti" src="https://img.shields.io/badge/-Van Antonietti-682998?style=flat&logo=Linkedin&logoColor=white" />
  </a>

  <a aria-label="Completed" href="https://www.42sp.org.br/">
    <img src="https://img.shields.io/badge/42.sp-GNL-682998?logo="></img>
  </a>

  <a href="https://github.com/VanAntonietti/42-get_next_line/stargazers">
    <img alt="Stargazers" src="https://img.shields.io/github/stars/VanAntonietti/42-get_next_line?color=682998&logo=github">
  </a>

  <a href="https://github.com/VanAntonietti/42-get_next_line/commits/main">
    <img src="https://img.shields.io/github/last-commit/VanAntonietti/42-get_next_line?color=682998">
  </a>
</p>
<p align="center">
  <a href="https://github.com/VanAntonietti/42-get_next_line">
    <img src="https://github.com/VanAntonietti/VanAntonietti/raw/main/img/gnl-star.png" alt="GNL 125/100">
  </a>
  <br>
  125/100
</p>

---

# 🚀 What is get_next_line?

This is the second project in the 42 Cadet Curriculum. The aim of this project is to make you code a function that returns a line, read from a file descriptor. Overall, it is an easy project once you comprehend what is being asked from you. It gets complicated by the fact that you are only allowed to use the following functions: read, malloc and free.

### Prototype
`char *get_next_line(int fd);`
### Return value
Read line: correct behavior
NULL: nothing else to read or an error occurred
### External functs.
`read`, `malloc`, `free`

---

# :bookmark_tabs: Info

## Mandatory part

- [x] Calling your function `get_next_line` in a loop will then allow you to read the text available on the file descriptor one line at a time until the end of it.
- [x] Your function should return the line that has just been read. If there is nothing else to read or if an error has occurred it should return NULL.
- [x] Make sure that your function behaves well when it reads from a file and when it reads from the standard input.
- [x] libft is not allowed for this project. You must add a `get_next_line_utils.c` file which will contain the functions that are needed for your `get_next_line` to work.
- [x] Your program must compile with the flag `-D BUFFER_SIZE=xx` which will be used as the buffer size for the read calls in your `get_next_line`. This value will be modified by your evaluators and by the moulinette.
- [x] The program will be compiled in this way: `gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c`.
- [x] Your read must use the `BUFFER_SIZE` defined during compilation to read from a file or from `stdin`. This value will be modified during the evaluation for testing purposes.
- [x] In the header file `get_next_line.h` you must have at least the prototype of the function `get_next_line.`
- [x] `lseek` is not an allowed function. File reading must be done only once.
- [x] We consider that `get_next_line` has undefined behavior if, between two calls, the same file descriptor switches to a different file before reading everything from the first `fd`.
- [x] Finally we consider that `get_next_line` has undefined behavior when reading from a binary file. However, if you wish, you can make this behavior coherent.
- [x] Global variables are forbidden.
- [x] Important: The returned line should include the `\n`, except if you have reached the end of file and there is no `\n`.

## Bonus part
Turn-in all 3 mandatory files ending by `_bonus.[c\h]` for this part.
- [x] To succeed `get_next_line with` a single static variable.
- [x] To be able to manage multiple file descriptors with your `get_next_line`. For example, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors.


---
