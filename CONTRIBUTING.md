# Contributing to wrasm

## The RISC-V spec

This can be found here https://riscv.org/technical/specifications/ or here
https://github.com/riscv/riscv-isa-manual.

## Reporting Bugs

If you've found a bug, please open an issue on GitHub.

### Reporting Security Vulnerabilities

The best way to report a security vulnerability is through GitHub's security
page. This allows us to privately try to diagnose and fix the vulnerability. We
would appreciate it if you do NOT open a regular issue for this purpose.

## Docs

If you want to contribute to the docs, please open a pull request. If you are
unsure of anything, you can either ask by commenting on said PR, or by
opening/commenting on a related issue.

## Code

If you want to contribute any code, whether it is to fix bugs or add features,
we would appreciate it if there is an existing issue for the problem. This
allows us to use issues to track bugs and feature requests, without having to
sort through PRs.

If you have already submitted a PR, don't worry, we won't block anyone's pull
request just because it doesn't have an associated issue. (Also, it's not too
late to create an issue :).)

## Whitespace fixes, code style changes, etc

If your PR is entirely or mostly cosmetic code changes, we most likely won't
accept it. I think the explanation given here is incredibly good
https://github.com/rails/rails/pull/13771#issuecomment-32746700. If you find
this kind of problem, please either open an issue about it or mention it in one
such existing issue.

## Something Else?

If there's anything that isn't covered here, the general process for
contributing should be something along the lines of:
1. Open an issue about it
2. Figure out what to do next with a maintainer or whoever
3. Pull Request?

## Philosophy

The wrasm codebase is designed to be as independent as possible, this means it should be compilable on any C compiler for any architecture on any operating system. In practice, this isn't really feasible to test, but some general guidelines are:
1. Use only stdlib features defined in the C standard. I.e. no Linux specific headers.
2. Avoid any UB (undefined behaviour). Even if it works, it's generally not best practices and could cause issues on another system.
3. If any os/compiler/architecture specific code is absolutely necessary, ensure there is a fully functional, compilable alternative that should work on every system, even of it's not best practices (also see no. 2 above)

The other main part of the philosophy is to give the end user the power to shoot themselves in the foot with a warning. In this vein, it is theoretically possible to compile wrasm on a C compiler that does not define `__clang__`, `__gnu_c__` or `_MSV_VER`. This will however raise a warning, which means removing the `-werror` flag is required to do so. What this effectively means is that any time you raise an error, by default wrasm will exit, however this is possible to change. Pretty much, even if an error occurs, try to make it work anyway, or at the very least don't break anything else.