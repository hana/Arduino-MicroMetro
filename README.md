# Arduino MicroMetro

Simple metro working with microseconds.  

## Usage
### Installation
Put `Micrometro` folder into your arduino "Libraries" folder.


### Code
1. Include Library
```
#include <MicroMetro.h>
```

2. Create instance and set interval
```
MicroMetro metro = MicroMetro(1000000);	// 1000000us = 1 sec
```

3. in Loop()...
```
if(metro.bang()) {
 //do something here
}
```

___
#LICENSE
CC-BY 4.0