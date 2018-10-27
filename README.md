# Arduino MicroMetro

Simple metro working with microseconds.  

## Usage
### Installation
1. Download this Library and rename the folder name into "MicroMetro"
2. Put `Micrometro` folder into your arduino "Libraries" folder.


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