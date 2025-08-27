// also refered to be an abnormal exit

You can use this if something has gone horribly wrong and you want to indicate as much to the outside
environment. This also won’t necessarily clean up any open files, etc.
I’ve rarely seen this used.
Some foreshadowing about signals: this actually works by raising a SIGABRT which will end the process.
What happens after that is up to the system, but on Unix-likes, it was common to dump core1
as the program
terminated.

[1]: https://en.wikipedia.org/wiki/Core_dump