```
______ _____         ______       _____                 _   
| ___ \  ___|        |  _  \     |  _  |               | |  
| |_/ / |__  ___ ___ | | | |___  | | | |_   _  ___  ___| |_ 
|    /|  __|/ __/ _ \| | | / _ \ | | | | | | |/ _ \/ __| __|
| |\ \| |__| (_| (_) | |/ /  __/ \ \/' / |_| |  __/\__ \ |_ 
\_| \_\____/\___\___/|___/ \___|  \_/\_\\__,_|\___||___/\__|
```

# FINAL 0x1 CODE LINES

> Counting lines of code in any language is not as easy as it looks at a first glance. Consider different indentation (whitespaces or tabulators), line or block comments and line breaks specific to given platform. For instance, the following should return 3 lines of code (one for function opening body, second one for the Console method call and the last one for the curly brace closing function's body):
> 
> ```
> /***
> * Example
> //**********//////////////
> 
> public void f() { // Hello there
>     // yikes
> 
>   Console./*TryTo*/Write("Su//p/*");
>}
> ```

Create an utility which counts lines of source code of your favourite language or a generic one. Consider all the mentioned stuff, summaries, stream-based block comments and nested comments. Does your approach work with every single possibility (you don't have to answer, try thinking about it)?

## How to run ? 
```
Compliation with g++
Linux: g++ -std=c++17 -o codelines codelines.cpp
Windows: g++ -std=c++17 -o codelines.exe codelines.cpp

Run:
Linux: ./codelines PATH_TO_GD_SCRIPT
Windows: ./codelines PATH_TO_GD_SCRIPT
```