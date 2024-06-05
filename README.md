# zoob

More silly game!

# Building

First you have to bootstrap nob, use mingw if you are on windows:

```bash
cc -o nob nob.c
```

Then you have to run nob, pass the "--windows" flag to build for windows from
linux or the "--linux" flag to build for linux from windows. It should
auto-detect your platform if you are not cross-compiling though. No mac support,
but maybe you can figure it out. It's not too different from linux.

```bash
./nob
./nob --windows
```

There is a "-r" flag for running as soon as the build is complete, I just added
that for quick debugging, it should be the last argument as everything
afterwards is passed to the executable as arguments.
