# Vim

## Why Vim

In my opinion, the Vim editor has the following benefits:

- It keeps your finger on the keyboard throughout the development and moving the cursor without the arrow keys keeps your fingers in the best position for typing.
- Convenient file switching and panel controls allow you to edit multiple files simultaneously or even different locations of the same file.
- Vim's macros can batch repeat operations (e.g. add tabs to multi-lines, etc.)
- Vim is well-suited for Linux servers without GUI. When you connect to a remote server through `ssh`, you can only develop from the command line because there is no GUI (of course, many IDEs such as PyCharm now provide `ssh` plugins to solve this problem).
- A rich ecology of plugins gives you the world's most fancy command-line editor.

## How to learn Vim

Unfortunately Vim does have a pretty steep learning curve and it took me a few weeks to get used to developing with Vim. You'll feel very uncomfortable at first, but once you get past the initial stages, trust me, you'll fall in love with Vim.

There is a vast amount of learning material available on Vim, but the best way to master it is to use it in your daily development, no need to learn all the fancy advanced Vim tricks right away. The recommended learning path is as follows:

- Read [This tutorial](https://missing.csail.mit.edu/2020/editors/) first to understand the basic Vim concepts and usage.
- Use Vim's own `vimtutor` to practice. After installing Vim, type `vimtutor` directly into the command line to enter the practice program.
- Then you can force yourself to use Vim for development, and you can install Vim plugins in your favorite IDE.
- Once you're fully comfortable with Vim, a new world opens up to you, and you can configure your own Vim on demand (by modifying the `.vimrc` file), and there are countless resources on the Internet to learn from.
- If you want to know more about how to customize Vim to suit your needs, [_Learn Vim Script the Hard Way_](https://learnvimscriptthehardway.stevelosh.com/) is a perfect start point.

## Remapping Keys

Ctrl and Esc keys are probably two of the most used keys in Vim. However, these two keys are pretty far away from home row.
In order to make it easier to reach these keys, you can remap CapsLock to Esc or Ctrl.

On Windows, [Powertoys](https://learn.microsoft.com/en-us/windows/powertoys/) or [AutoHotkey](https://www.autohotkey.com/) can be used to achieve this goal.    
On macOS, you can remap keys in system settings, see this [page](https://vim.fandom.com/wiki/Map_caps_lock_to_escape_in_macOS). [Karabiner-Elements](https://karabiner-elements.pqrs.org/) also works.

A better solution is to make CapsLock function as Esc and Ctrl simultaneously. Click CapsLock to send Esc, hold CapsLock to use it as Ctrl key.

On Windows, this [AutoHotKey gist](https://gist.github.com/sedm0784/4443120) does just this.    
On macOS, this [karabiner rule](https://ke-complex-modifications.pqrs.org/#caps_lock_tapped_escape_held_left_control) does the magic.

## Recommended References

- Neil, Drew. Practical Vim: Edit Text at the Speed of Thought. N.p., Pragmatic Bookshelf, 2015.
- Neil, Drew. Modern Vim: Craft Your Development Environment with Vim 8 and Neovim. United States, Pragmatic Bookshelf.
