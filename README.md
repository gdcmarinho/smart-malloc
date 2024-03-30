<div align="center">
    <img src="./.github/images/logo.png" width="350px">
</div>

### Introduction
smart-malloc is a memory management library that uses overengineered and overheaded machine learning system to determine if it's a good idea to allocate or not a new memory block. It uses the ```sbrk()``` [POSIX interface](https://en.wikipedia.org/wiki/POSIX) to allocate new memory.

### Use Cases
As already mentioned, smart-malloc has no intention to be a memory management library for all purposes. It has a really overengineered and overheaded machine learning system that works to detect and decide when it's time to free some memory block and if it's acceptable to allocate a new memory block.

The main point of smart-malloc is for reasearch and debugging, so, the use in production scenarios should be avoided.

### Usage
Clone the repository and copy the smart_malloc.c and smart_malloc.h inside your project. Import the headers file:

```c
#include "smart_malloc.h"
```

and start using it:
```c
smart_malloc(strlen("Hello World!\n") * 10);
```

### Wiki
If you're lost, you'll probably like our [wiki](https://github.com/gdcmarinho/smart-malloc/wiki) with a really detailed explanation about smart-malloc and memory management.

### License
smart-malloc is open source and uses GPLv3. See the LICENSE file for more info.

<a href="https://www.gnu.org/licenses/gpl-3.0.html.en">
    <img src="./.github/images/gpl3.svg" alt="GPLv3 license badge" width="130">
</a>